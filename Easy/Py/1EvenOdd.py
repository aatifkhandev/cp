#  Determining Even/Odd Numbers
#  Example:
#  Input: number = 4
#  Output: Even

def EvenOdd(number):
    if n%2==0:
        return True
    else:
        return False
    
number=int(input("Enter a number"))
if(EvenOdd(number)):
    print("Even")
else:
    print("Odd")
                