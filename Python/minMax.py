#by jewel john
#program to find smallest and largest number from a list using a funtion

def min_max(list):
    smallest = list[0]
    largest = list[0]

    for i in list:
        if smallest > i:
            smallest = i
        if largest < i:
            largest = i

    return smallest, largest

list = []
num = int(input("Enter the number of elements in the list : "))
for i in range(0, num):
    list.append(int(input("Enter the "+str(i+1)+"th element: ")))

print("The smallest and the largest elements are ",min_max(list))