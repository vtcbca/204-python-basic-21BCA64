#WAS to enter any number and print from which number from 0 to 9 it is divisible.
no1=0
no2=9
n=int(input("enter the number to be divided by:"))
for i in range(no1,no2):
    if(i%n==0):
        print(i)
