#WAS to enter any number and print the sum of its digit
no=int(input("Enter a value = ")) 
sum=0
a=no
while(no>0):
    temp=no%10
    sum=sum+temp
    no=no//10
print("the sum of {}'s all digit is {}".format(a,sum))
