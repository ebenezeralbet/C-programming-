#include <stdio.h>
int main(){
int a,b;
char operation;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
printf("enter operation:\n");
scanf("%c\n",&operation);
if(operation=='+'){
printf("add:%d",a+b);
}
else if(operation=='-'){
printf("sub:%d",a-b);}
else{
printf("fuck");
} 
return 0;
}