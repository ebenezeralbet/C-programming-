#include <stdio.h>
int main(){
int n,sum=0;
printf("enter n:");
scanf("%d",&n);
while(n>0){
sum=sum+(n%10);
n=n/10;
 }
 printf("sum =%d",sum);
 return 0;
}
 