#################------------ASSIGNMENT 1-----------------###################
The number below are the first 10 days of rainfall amounts in 1996.Read them
into a vector using c() function
0.1,0.6,33.8,1.9,9.6,4.3,33.7,0.3,0.0,0.1
What is the mean rainfall,how about the standard deviation?
Which day saw the highest rainfall?


santhoshvector<-c(0.1,0.6,33.8,1.9,9.6,4.3,33.7,0.3,0.0,0.1)
santhoshvector

#MEAN OF THE RAINFALL
    mean(santhoshvector)
  

#STANDARD DEVIATION
   sd(santhoshvector)
  

for(i in seq_along(santhoshvector))
{
    if(santhoshvector[i]==max(santhoshvector))
      { 
        print(paste("***************************************"))
        print(paste("THE HIGHEST RAINFALL IS ON THE DAY:: ",i))
        print(paste("***************************************"))
       }
}






################--------------ASSIGNMENT 2------------------#################
Create a DATAFRAME from a matrix of your choice,change rhe row names so every
rows say id_i(where i is the row number),change the column names to variable_i
(where i is the column number)

mymatrix=matrix(1:256,16,16)
mymatrix
santhosh_dataframe=data.frame(mymatrix)
santhosh_dataframe
v1={}
v2={}
for(i in seq_len(ncol(mymatrix)))
{
v1<-c(v1,paste("variable",i))
}
for(i in seq_len(nrow(mymatrix)))
{
v2<-c(v2,paste("id",i))
}
colnames(santhosh_dataframe)<-c(v1)
rownames(santhosh_dataframe)<-(v2)
santhosh_dataframe









