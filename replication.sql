CREATE USER 'holberton_user'@'localhost' IDENTIFIED BY 'projectcorrection280hbtn';
GRANT REPLICATION CLIENT ON *.* TO 'holberton_user'@'localhost';
FLUSH PRIVILEGES;


CREATE USER 'holberton_user'@'localhost' IDENTIFIED BY 'projectcorrection280hbtn';
GRANT REPLICATION CLIENT ON *.* TO 'holberton_user'@'localhost';


CREATE USER 'replica_user'@'replica_server_ip' IDENTIFIED WITH mysql_native_password BY 'password';
GRANT REPLICATION SLAVE ON *.* TO 'holberton_user'@'localhost';

SHOW GRANTS FOR 'holberton_user'@'localhost';

CREATE DATABASE tyrell_corp;
USE tyrell_corp;
CREATE TABLE nexus6 (
    id INT AUTO_INCREMENT PRIMARY KEY,
    model VARCHAR(255),
    manufacture_date DATE
);

INSERT INTO nexus6 (model, manufacture_date) VALUES ('Nexus 6', '2023-01-01');
GRANT SELECT ON tyrell_corp.nexus6 TO 'holberton_user'@'localhost';

CREATE DATABASE tyrell_corp;
USE tyrell_corp;
CREATE TABLE nexus6 (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255));
INSERT INTO nexus6 (name) VALUES ('Leon');
GRANT SELECT ON tyrell_corp.nexus6 TO 'holberton_user'@'localhost';
FLUSH PRIVILEGES;


CREATE USER 'replica_user'@'%' IDENTIFIED BY 'elements2036';
GRANT REPLICATION SLAVE ON *.* TO 'replica_user'@'%';
GRANT SELECT ON mysql.user TO 'holberton_user'@'localhost';
FLUSH PRIVILEGES;

CREATE USER 'replica_user'@'%' IDENTIFIED BY 'elements2036';
GRANT REPLICATION SLAVE ON *.* TO 'replica_user'@'%';
GRANT SELECT ON mysql.user TO 'holberton_user'@'localhost';
FLUSH PRIVILEGES;
-- Verification:
USE mysql;
SELECT * FROM user WHERE User = 'replica_user';



-- setting up replication
-- on web-01 (source)

--  Adjusting Your Source (web-01) Server’s Firewall
sudo ufw allow from 54.161.236.101 to any port 3306

-- configuring web-01 database
sudo nano /etc/mysql/mysql.conf.d/mysqld.cnf

-- bind-address            = source_server_ip
server-id               = 1
log_bin                 = /var/log/mysql/mysql-bin.log
binlog_do_db            = tyrell_corp

sudo systemctl restart mysql

-- creating replication user [this user was created previously]
mysql -u root -p

-- retrieving binary log coordinates from source (web-01)
FLUSH TABLES WITH READ LOCK;
SHOW MASTER STATUS;
-- Record the File name and the Position value

--  you must open a new terminal window or tab on your local machine so you can create the database snapshot without unlocking MySQL
ssh web-01

-- export your database using mysqldump
sudo mysqldump -uroot tyrell_corp > tyrell_corp.sql
-- close this terminal and return to original terminal

-- unlock tables
UNLOCK TABLES;
\q

-- send your snapshot file to your replica server
-- must have  added the source’s (web-01) public key to your replica’s authorized_keys file
scp tyrell_corp.sql ubuntu@54.161.236.101:/tmp/


-- setting up replication
-- on web-02 (replica)
ssh web-02
sudo mysql -uroot -p

-- create the new database to be replicated from the source
CREATE DATABASE tyrell_corp;
\q

-- import the database snapshot
sudo mysql tyrell_corp < /tmp/tyrell_corp.sql

-- configuring replica (web-02) database
sudo nano /etc/mysql/mysql.conf.d/mysqld.cnf
server-id               = 2
log_bin                 = /var/log/mysql/mysql-bin.log
binlog_do_db            = tyrell_corp
relay-log               = /var/log/mysql/mysql-relay-bin.log

sudo systemctl restart mysql

-- starting and testing replication (on replica[web-02])
mysql -uroot -p

-- configure several MySQL replication settings
CHANGE REPLICATION SOURCE TO
SOURCE_HOST='54.160.123.234',
SOURCE_USER='replica_user',
SOURCE_PASSWORD='elements2036',
SOURCE_LOG_FILE='mysql-bin.000001', -- change this
SOURCE_LOG_POS=154; -- change this

CHANGE MASTER TO
  MASTER_HOST='54.160.123.234',
  MASTER_USER='replica_user',
  MASTER_PASSWORD='elements2036',
  MASTER_LOG_FILE='mysql-bin.000001',
  MASTER_LOG_POS=154;


-- mysql-bin.000001 |      154

-- activate the replica server
START REPLICA;
START SLAVE

-- see details about the replica’s current state
SHOW REPLICA STATUS\G;
SHOW SLAVE STATUS\G;
