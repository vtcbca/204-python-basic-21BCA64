#WAS to enter any number and check number is armstrong number or not.
no=int(input("enter a value = "))
sum=0
temp=no
while(no>0):
    x=no%10
    y=x*x*x
    sum=sum+y
    no=no//10
if(temp==sum):
    print("{} is a Armstrong number".format(temp))
else:
    print("{} is a not Armstrong number".format(temp))
