##### What are Data Structures in R Programming?
# A data structure is essentially a way to organize data in a system
# to facilitate effective usage of the same.The whole idea is to reduce 
# the complexities of space and time in various tasks. 

#While using a programming language, different variables are essential to store
#different data. These variables are reserved in a memory location for storing 
#values. Once a variable is created, some area in the memory is reserved. 

#Data structures are the objects that are manipulated regularly in R. 
#They are used to store data in an organized fashion to make data manipulation 
#and other data operations more efficient. R has many data structures. 
#The following section will discuss them in detail.

############## VECTORS#############
#Vector is one of the basic data structures in R. It is homogenous, which means 
#that it only contains elements of the same data type. 
#Data types can be numeric, integer, character, complex, or logical.

#Vectors are created by using the c() function. Coercion takes place in a 
#vector, from bottom to top, if the elements passed are of different data 
#types, from logical to integer to double to character.

#The typeof() function is used to check the data type of the vector, and the 
#class() function is used to check the class of the vector.

Vec1 <- c(44, 25, 64, 96, 30)
Vec2 <- c(1, FALSE, 9.8, "hello world")
typeof(Vec1)
typeof(Vec2)

##To delete a vector, you simply have to do the following:

Vec1 <- NULL
Vec2 <- NULL

####Methods to Access Vector Elements

# Vectors can be accessed in the following ways:

# Elements of a vector can be accessed by using their respective indexes. [ ] brackets are used to specify indexes of the elements to be accessed.
# For example:

x <- c("Jan","Feb","March","Apr","May","June","July")
y <- x[c(3,2,7)]
print(y)




#Logical indexing, negative indexing, and 0/1 can also be used to access the elements of a vector.
#For example:

x <- c("Jan","Feb","March","Apr","May","June","July")
y <- x[c(TRUE,FALSE,TRUE,FALSE,FALSE,TRUE,TRUE)]
z <- x[c(-3,-7)]
c <- x[c(0,0,0,1,0,0,1)]
print(y)
print(z)
print(c)

####Vector Arithmetic

#You can perform addition, subtraction, multiplication, and division on the vectors having the same number of elements in the following ways:

v1 <- c(4,6,7,31,45)
v2 <- c(54,1,10,86,14,57)
add.v <- v1+v2
print(add.v)
sub.v <- v1-v2
print(sub.v)
multi.v <- v1*v2
print(multi.v)
divi.v <- v1/v2
print(divi.v)



#Recycling Vector Elements

#If arithmetic operations are performed on vectors having unequal lengths, then a vector’s elements, which are shorter in number as compared to the elements of other vectors, are recycled. For example:

v1 <- c(8,7,6,5,0,1)
v2 <- c(7,15)                               
add.v <- v1+v2                                     
(v2 becomes c(7,15,7,15,7,15))
print(add.v)
sub.v <- v1-v2
print(sub.v)


####Sorting a Vector

#You can sort the elements of a vector by using the sort() function in the
#following way:

v <- c(4,78,-45,6,89,678)
sort.v <- sort(v)
print(sort.v)

#Sort the elements in the reverse order
revsort.v <- sort(v, decreasing = TRUE)
print(revsort.v) 

#Sorting character vectors
v <- c("Jan","Feb","March","April")
sort.v <- sort(v)
print(sort.v) 

#Sorting character vectors in reverse order
revsort.v <- sort(v, decreasing = TRUE)
print(revsort.v)


##########Lists
#A list is a non-homogeneous data structure, which implies that it can contain elements of different data types. It accepts numbers, characters, lists, and even matrices and functions inside it. It is created by using the list() function.

#For example:

list1<- list("Sam", "Green", c(8,2,67), TRUE, 51.99, 11.78,FALSE)
print(list1)



## Accessing the Elements of a List

# The elements of a list can be accessed by using the indices of those 
#elements.

#For example:

list2 <- list(matrix(c(3,9,5,1,-2,8), nrow = 2), c("Jan","Feb","Mar"), list(3,4,5))
print(list2[1])
print(list2[2])
print(list2[3])



#Adding and Deleting the Elements of a List

#You can add and delete elements only at the end of a list.

#For example:

list2 <- list(matrix(c(3,9,5,1,-2,8), nrow = 2), c("Jan","Feb","Mar"), list(3,4,5))
list2[4] <- “HELLO”
print(list2[4])





#######Matrices
#Matrix is a two-dimensional data structure that is homogenous, meaning that it only accepts elements of the same data type. Coercion takes place if elements of different data types are passed. It is created by using the matrix() function.

#The basic syntax to create a matrix is given below:

matrix(data, nrow, ncol, byrow, dimnames)

#where,
#data = the input element of a matrix given as a vector.
#nrow = the number of rows to be created.
#ncol = the number of columns to be created.
#byrow = the row-wise arrangement of the elements instead of column-wise
#dimnames = the names of columns or rows to be created.

M1 <- matrix(c(1:9), nrow = 3, ncol =3, byrow= TRUE)
print(M1)


By using row and column names, a matrix can be created as follows:

rownames = c("row1", "row2", "row3")
colnames = c("col1", "col2", "col3")
M3 <- matrix(c(1:9), nrow = 3, byrow = TRUE, dimnames = list(rownames, colnames))
print(M3)


Accessing the Elements of a Matrix

To access the elements of a matrix, row and column indices are used in the following ways:
For accessing the elements of the matrix M3 created above, use the following syntax:

print(M3[1,1])
print(M3[3,3])
print(M3[2,3])











