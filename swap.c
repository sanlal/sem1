#include<stdio.h>

void swap(int a, int b){
int temp=a;
a=b;
b=temp;
}

int main(){
int x=10,y=15;
swap(x,y);
printf("%d \t %d",&x,&y);
return 0;
}