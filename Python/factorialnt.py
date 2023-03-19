#by Jewel John
#program for factorial of a number

f = 1
num = int(input("Enter a number: "))

while num > 0:
    f = f * num
    num = num - 1

print("The factorial of this number is : " + str(f))