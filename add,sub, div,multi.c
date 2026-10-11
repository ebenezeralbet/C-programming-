#include <stdio.h>
int main(){
    int add,sub,multiply,divide;
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    multiply=a*b;
    divide=a/b;

    printf("add:%d+%d=%d\n",a,b,add);
     printf("sub:%d-%d=%d\n",a,b,sub);
     printf("multiply:%d*%d=%d\n",a,b,multiply);
     printf("divide:%d/%d=%d\n",a,b,divide);
    return 0;
}