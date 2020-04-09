
with open("randoms.txt",'w') as o:
    for x in range(10000):
        o.write(str(x))
        o.write("\n")
    
