####################CONTROL STRUCTURES######################


##((1)) --------------if loop-----------
x<-100
if(x>10){
print(paste(x,"is greater than 10"))
}


##((2)) -----------if else loop----------
x=99
if(x>10){
print(paste(x,"is greater than 10"))
} else{
print(paste(x,"is less than 10"))
}



##((3))-----------for loop----------------
##(A)

numbers<-scan()
numbers
x <- numbers[1:25]
x
for(i in x){
print(i)
}

##(B)

x <- letters[1:26]

for(i in x){
print(i)
}


##(C)natural numbers
for(i in 1:100)
print(i)


##(D)Square of number
for(i in 1:100)
print(i*i)

##(E)Cubic of numbers
for(i in 1:100)
print(i*i*i)





##########Generate sequence#############
for(i in seq_along(x)){
print(x[i])
}

############NESTED LOOP###############
# Defining matrix
m <- matrix(2:15, 2)

for (r in seq(nrow(m))) {
for (c in seq(ncol(m))) {
	print(m[r, c])
}
}


#############Next and Break##################

#(1)
x <- 1:10

# Print even numbers
for(i in x){
if(i%%2 != 0){
	next #Jumps to next loop
}
print(i)
}

# Print odd numbers
x<-1:10
for(i in x){
if(i%%2 != 1){
	next
}
print(i)
if(i>2){
break
}
}




# R program to illustrate
# if statement
a <- 76
b <- 67

# TRUE condition
if(a > b)
{
	c <- a - b
	print("condition a > b is TRUE")
	print(paste("Difference between a, b is : ", c))
}

# FALSE condition
if(a < b)
{
	c <- a - b
	print("condition a < b is TRUE")
	print(paste("Difference between a, b is : ", c))
}




# R program to illustrate
# if statement
a <- 100
b <- 2414

# TRUE condition
if(a > b)
{
	c <- a - b
	print("condition a > b is TRUE")
	print(paste("Difference between a, b is : ", c))
}

# FALSE condition
if(a < b)
{
	c <- a - b
	print("condition a > b is FALSE")
	print(paste("Difference between a, b is : ", c))
}





# R if-else statement Example
a <- 67
b <- 76


# This example will execute else block
if(a > b)
{
	c <- a - b
	print("condition a > b is TRUE")
	print(paste("Difference between a, b is : ", c))
} else
{
	c <- a - b
	print("condition a > b is FALSE")
	print(paste("Difference between a, b is : ", c))
}





# R Nested if else statement Example
a <- 10
b <- 11


if(a == 10)
{
	if(b == 10)
	{
		print("a:10 b:10")
	} else
	{
		print("a:10 b:11")	
	}
} else
{
	if(a == 11)
	{
		print("a:11 b:10")
	} else
	{
		print("a:11 b:11")
	}
}






# R switch statement example

# Expression in terms of the index value
x <- switch(
	2,		 # Expression
	"SANTHOSH", # case 1
	"SETTLED",	 # case 2
	"PLACEMENT"	 # case 3
)
print(x)

# Expression in terms of the string value
y <- switch(
	"SAN40L",			 # Expression
	"SAN60L"="SANTHOSH",	 # case 1
	"SAN30L"="SETTLED",	 # case 2
	"SAN10L"="PLACEMENT"	 # case 3
)
print(y)

z <- switch(
	"SAN40L",			 # Expression
	"SAN60L"="SANTHOSH",	 # case 1
	"SAN30L"="SETTLED",	 # case 2
	"SAN10L"="PLACEMENT"	 # case 3
)
print(z)
print(z)



















#################  FUNCTIONS ###############
x<-c(1,2,3,4,5,6,6,6,7,7,8)
x
# Find sum of numbers 4 to 6.
print(sum(1:8))

# Find max of numbers 4 and 6.
print(max(1:8))

# Find min of numbers 4 and 6.
print(min(1:8))



# A simple R function to check
# whether x is even or odd

evenOdd = function(x){
if(x %% 2 == 0)
	return("even")
else
	return("odd")
}

print(evenOdd(4))
print(evenOdd(3))







# A simple R function to calculate
# area of a circle

areaOfCircle = function(radius){
area = pi*radius^2
return(area)
}

print(areaOfCircle(2))
















# A simple R program to demonstrate
# passing arguments to a function

Rectangle = function(length=5, width=4){
area = length * width
return(area)
}

# Case 1:
print(Rectangle(2, 3))

# Case 2:
print(Rectangle(width = 8, length = 4))

# Case 3:
print(Rectangle())






