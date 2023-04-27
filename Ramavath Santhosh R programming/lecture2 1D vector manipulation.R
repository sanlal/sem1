values<-scan()
values
name<-scan(what='char')
name


v3<-c(values,name)
v3


#####VECTOR DATA STRUCTURE
v1<-c(2016,2018,2022,2025)
v1

v1[2]=2019
v1


v1[2:4]

v1[c(1,2,3,4,5,6)]

v<-c(50>20)
v

v<-c(100>70||70>100)
v




##########ONE DIMENSIONAL VECTOR MANIPPULATION

v1<-scan()
v1

   ##COMBINING VECTORS
v2<-c(v1,99,78,567,5,7,4,5,77,35,8,4)
v2
v2<-c(v2,v2)
v2
v3<-c(v1,v1,v2)
v3
v4<-c(v,v1,v2,v3,v1)
v4

   ##LENGTH OF THE VECTOR
length(v4)
length(v)
length(v1)
length(v2)
length(v3)

    ##SORTING THE VECTORS
sort(v)
sort(v1)
sort(v2)
sort(v3)
sort(v4)

   ##SORTED VALUE ASSIGN IN ANOTHER VECTOR BY IN THAT VECTOR ONLY

v2<-sort(v1)
v2
v3<-sort(v2)
v2
v3<-sort(v4)
v3
v3s
v3

   ##RANK OF THE VECTOR VALUES
rank(v3)
rank(v)
rank(v1)
rank(v2)
rank(v4)


########MATRIX CREATION###########

   ##Coloumn based matrix
m1<-cbind(v3,v4)
m1

   ##Row based matrix
m2<-rbind(v3,v4)
m2

v1<-c(1,23,4,4,5,6,7,8,96,4,6,8)
v1
v2<-c(9,7,5,3,2,678,5,3,57,7,8,7)
v2

rbind(v2,v1)
rbind(v1,v2)
cbind(v2,v1)
cbind(v1,v2)
v1[1:5]
v2[1:7]
cbind(v1,v2)


v1<-c(1,2,3,4,5)
v1
v2<-c(9,7,8,5,6,7,8,5,3,689,567,35,78,324,786,23132,67,327,234,67,,45,345,4)
v2
cbind(v1,v2)
rbind(v1,v2)


v1<-c(6,57,43,87,23)
v1
v2<-c(98,78,56,45,7)
v2
cbind(v2,v1)
rbind(v2,v1)
cbind(rbind,v1)###wont give error but at place of rbind it will be question mark



#####    matrix(data,row,col)

v1<-scan()
v1
v2<-scan()
v2
m1<-rbind(v1,v2)
m2<-cbind(v1,v2)
m1


m3<-matrix(v1,3,6)
m3

m4<-matrix(v2,4,5)
m4


##########MATRIX MANIPULATION   ##########3
m3[2,3]
m4[4,3]
m4[3,5]
m4[,4]
m3[4,]
m3[2,]
m4[2,4]=457546
m4



########CREATION OF DATA FRAME FROM VECTORS  ############
names<-scan(what='char')
NAMES
names
marks<-scan()
marks


df1<-data.frame(names,marks)
df1

rollno<-scan()
rollno

df1<-data.frame(rollno,names,marks)
df1

dob<-scan()
dob

college<-scan(what='char')
college
df1<-data.frame(rollno,names,dob,college,marks)
df1



##################READ DATA FROM EXTERNAL SOURCE  ##############

student<-read.csv(file.choose())
student

head(student)
head(student,500)
head(student,5)

tail(student)
tail(student,10)

head(student)

newdata<-student[c(1,4)]
newdata

head(newdata)

head(student[3:8])
student$s1



########SIMPLE STATISTICS ######
b1<-scan()
b1


min(b1)
max(b1)
mean(b1)
median(b1)
summary(b1)
summary(student$s2)


v9<-sort(student$s2)
v9

b1<-sort(student$s2)
b1


