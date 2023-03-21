#by jewel john
#program to append contents of two files

f1 = open("text_1.txt", 'a')
f2 = open("text_2.txt", 'r')

f2_str = f2.read()
f1.write("\n"+f2_str)