##Q2 
myvector<-c(0.1,0.6,33.8,1.9,9.6,4.3,33.7,0.3,0.0,0.1)
mean(myvector)
sd(myvector)
for(i in seq_along(myvector))
{
   if(myvector[i]==max(myvector))
   {
    print(paste("The highest rainfall is on day",i,sep=' '))
    }
}



##Q3 

x<-runif(100,0,1)
m<-matrix(x,10,10)
m
#(i)
rmean<-rowMeans(m)
rmean
colmean<-colMeans(m)
colmean
#(ii)
sum<-sum(diag(m))
sum
#(iii)
sd(m)



##Q4

P<-c("person_1","person_2","person_3","person_4","person_5","person_6","person_7","person_8")
I<-c(10000,14000,24000,43000,12323,13414,43212,36000)
low_risk=character(0)
high_risk=character(0)
for(i in 1:8)
{
if(I[i]<30000)
{
high_risk=c(high_risk,P[i])
}
else
{
low_risk=c(low_risk,P[i])
}
}
low_risk
high_risk



##Q5

X<-c(TRUE,FALSE,FALSE,TRUE)
Y<-c(FALSE,TRUE,FALSE,TRUE)
print(X & Y)
j<-TRUE
for(i in X)
{
j<-j||i
}
print(j)



##Q6
data(iris)
head(iris,3)
dim(iris)
summary(iris)
names(iris)
x<-iris
class(x)
x[3,4]
x[3,1:4]


##Q7
AMOUNT<-c(90,50,100,40,20,38)
CHEMICAL<-c("c1","c2","c3","c4","c5","c6")
colors<-c("green","red","blue","orange","pink","yellow")
pie(AMOUNT,label=CHEMICAL,col=colors,init.angle=180)



##Q8

x<-1
while(x<-7){

    if(x<-3){
        print("Four is greater than three")
} else if(x--4){
       print("Threee is greater than two ")
}
x<-x+1
}





