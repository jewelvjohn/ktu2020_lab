#by jewel john
#funtion to check odd or even

def even(num):
    if num % 2 == 0:
        print("The number ",num ,"is even")
    else:
        print("The number ",num ,"is odd")

n = int(input("Enter a number: "))
even(n)