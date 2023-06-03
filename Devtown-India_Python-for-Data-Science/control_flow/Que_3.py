altitude = 100
speed = 2500
propulsion = "Jet"


# checks if altitude is less than 1000 AND speed is greater than 100
if (altitude < 1000 and speed > 100):
        print(f"Altitude: {altitude}, Speed: {speed}")

# checks if propulsion is Jet OR Turbopop AND speed is less than 300 AND altitude is greater than 20000
if ((propulsion == "Jet" or propulsion == "Turboprop") and speed < 300 and altitude > 20000):
        print(f"Propulsion: {propulsion}, Speed: {speed}, Altitude: {altitude}")

# checks if speed is greater than 400 AND propulsion is Propeller
if (not (speed > 400 and propulsion == "Propeller")):
        print(f"Speed: {speed}, Propulsion: {propulsion}")

# checks if altitude is greater than 500 AND speed is greater than 100 OR propulsion IS_NOT Propeller
if ((altitude > 500 and speed > 100) or not propulsion == "Propeller"):
        print(f"Altitude: {altitude}, Speed: {speed}, Propulsion: {propulsion}")