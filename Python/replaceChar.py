#by jewel john
#program to change first letter to $ sign if found repeated in a string

output = ""
string = input("Enter the string: ")
letter = string[0]

output = output + letter
for ch in string[1: ] :
    if ch==letter :
        output = output + '$'
    else :
        output = output + ch

print("The output is: ", output)