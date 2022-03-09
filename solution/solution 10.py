#WAS to enter any number and check it is palindrum number or not.
no=int(input("enter a value = "))
sum=0
temp=no
while(no>0):
    x=no%10
    sum=sum*10+x
    no=no//10
if(temp==sum):
    print("{} is a palimdrome number".format(temp))
else:
    print("{} is a not palimdrome number".format(temp))
