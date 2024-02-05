x=int(input("Enter first number"))
y=int(input("Enter second number"))
z=int(input("Enter third number"))
if(x>y and y>z):
    largest=x
elif(y>x and y>z):
    largest=y
elif(z>x and z>y):
 largest=z
print("Largest value in %d,%d and %d is %d"%(x,y,z,largest)) 
      
    

        
