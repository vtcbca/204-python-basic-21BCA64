"""WAS to enter any number to print following pattern
 *****
  ****
   ***
    **
     * """
no=int(input("enter a value till you print series="))
for i in range(0,no):
    for j in range(0,i+1):
        print("*",end="")
    print("\r")
