#WAS enter 3 number and print which number maximum number
no1=int(input("enter value of no1: "))
no2=int(input("enter value of no2: "))
no3=int(input("enter value of no3: "))
if(no1>no2)and(no1>no3):
    largest=no1
elif(no2>no1)and(no2>no3):
    largest=no2
else:
    largest=no3
print("{} is the largest number".format(largest))
