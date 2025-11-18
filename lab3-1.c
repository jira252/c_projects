#include <stdio.h>

void main(void){
    int i=0;
    while(i <= 10){
       printf("Hello World %d \n", i);
       i+=2;  //เพิ่มค่า i ทีล่ะ 1
    }

    int n = 10;
    while(n > 0){
          //ให้เขียนนับลง จาก 10 --> 0
          printf("Hello World %d \n", n);
          n--;
    }
}