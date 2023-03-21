#by jewel john
#funtion to calculate the fibonacci series

def fibonacci(n):
    if n <= 1:
        return n
    else:
        return (fibonacci(n-1) + fibonacci(n-2))
    
terms = int(input("Enter the number of terms: "))

for i in range(0, terms):
    print(fibonacci(i), " ")