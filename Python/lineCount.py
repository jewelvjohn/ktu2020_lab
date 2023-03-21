#by jewel john
#program to count number of lines in a text file

f = open("text_1.txt", 'r')
count = 0

str = f.read()
lines = str.split("\n")

for i in lines:
    count += 1

print("The number of lines in this file is: ",count)