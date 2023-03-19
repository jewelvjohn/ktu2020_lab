#by jewel john
#program to sum numbers using list

mylist = []
n = int(input("Enter the number of numbers: "))
for count in range(0, n):
    mylist.append(int(input("Enter the "+str(count + 1)+"th number: ")))

sum = 0
 
for count in range(0, n):
    sum = sum + mylist[count]

print("The sum of all the entered numbers: "+ str(sum)) 