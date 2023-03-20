#by jewel john
#program to find the largest element from a list

list = []
num = int(input("Enter the size of the list: "))

for i in range(0, num):
    list.append(int(input("Enter the "+str(i+1)+"th element: ")))

largest = list[0]
for i in range(0, num):
    if list[i] > largest:
        largest = list[i]

print("The largest element in the list is : " ,largest)