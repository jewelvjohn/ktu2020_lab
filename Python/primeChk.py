#by jewel john
#program to check if prime or not

n = int(input("Enter a number: "))
for i in range(1, n):
    flag = True
    for j in range(2, int(i/2)):
        if i%j == 0:
            flag = False
    if flag :
        print(str(i) + "is a prime")
    else :
        print(str(i) + "is a not prime")