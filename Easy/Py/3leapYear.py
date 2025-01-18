# Write a program to check if a given year is a leap year.
# Input: year = 2020
# Output: Leap Year
# Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.


def checkLeap(year):
    if year%4==0 and year%100!=0 or year%400==0:
        return True
    else:
        return False
    
year=int(input("Enter a year: "))
if(checkLeap(year)):
    print("Leap year")
else:
    print("Not a leap year")