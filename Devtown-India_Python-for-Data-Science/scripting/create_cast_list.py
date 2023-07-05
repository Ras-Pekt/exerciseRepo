def create_cast_list(filename):
    cast_list = []
    
    with open(filename, "r") as rf:
        for line in rf:
            cast_list.append(line.split(",")[0])

    return cast_list

cast_list = create_cast_list('flying_circus_cast.txt')

with open("actors.txt", "w") as wf:
    for actor in cast_list:
        wf.write(f"{actor}\n")
