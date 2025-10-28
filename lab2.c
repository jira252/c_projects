#include <stdio.h>

int main(void){
    int age=15;
    char name[50]="Warat Jiranukul";
    char gender = 'M' ;
    float gpa=2.87;

    printf("My name %s \n", name);  //แสดงข้อความ String
    printf("I'm %d \n", age);  //เลขจำนวนเต็ม %d Decimal 
    printf("Grade %f \n", gpa);
    printf("Gender %c \n", gender);
    return 0;
}

////  %f float, %c = char
