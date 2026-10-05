#include<stdio.h>
int main(){
int year;
printf("enter a year :");
scanf("%d",&year);
if(year%100==0){
if(year%400==0){
printf("leap year");
}
else {
printf("nat a leap year");
}
}
else{
if(year%4==0){
printf("leap year");
}
}
return 0; 
}