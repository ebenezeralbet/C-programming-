#include <stdio.h>
int main( ){
int height[10],i;
height[1]=2;
height[2]=7;
height[3]=10;
for(i=4;i<7;i++){
scanf("%d\n",&height[i]);

for(i=1;i<=3;i++){
printf("%d\n",height[i]);
}
}
return 0;
