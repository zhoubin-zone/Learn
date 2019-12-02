def a():
    '''this is a desc text for this py cmd'''
    pass
print(a.__doc__) #print a.doc information

with open("myfile.txt") as f:
    for line in f:
        print(line, end="")