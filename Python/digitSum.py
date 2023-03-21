#by jewel john
#funtion to calculate the sum of digit of given number

def count(num):
    sum = 0
    while num > 0:
        digit = num % 10
        sum += digit
        num = num // 10
    
    return sum

n = int(input("Enter a number: "))
print("The sum of digits of the number is: ",count(n))