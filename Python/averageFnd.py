#by jewel john
#program to find average of 10 numbers

avg = 0
for count in range(0, 10):
    num = float(input("Enter the "+str(count + 1)+"th number : "))
    avg = avg + num
avg = avg / 10
print("The average of these numbers are : "+str(avg))