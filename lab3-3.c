#include <stdio.h>

void main(void){
    int a=2, b=1, c;

    printf("enter :");
    scanf("%d",&a);

    
    while(b<=12){
     c=a*b;
    printf("%d x %d = %d \n", a,b,c);
    scanf("2");
    b++;
    }
}