#include <stdio.h>

int main() {
    float w ;
    float h ;
    float bmi ;

    printf("height (m) : ");
    scanf("%f" ,&w);

    printf("wight (kg):");
    scanf("%f" ,&w);

    bmi = w / (h*h) ;
    printf("bmi = %.2f", bmi);

    if(bmi >= 30){
       printf("Obese");
    }else if(bmi >=25 && bmi <= 29.0){
        printf("Overweight");
    }

    if(bmi >= 25){
       printf("Overweight");
    }else if(bmi >=18.5 && bmi <= 24.9){
        printf("Healthy weight");
    }

    if(bmi >= 18.5){
       printf("Healthy weight");
    }else if(bmi >=18.5 && bmi <= 0){
        printf("Underweight");
    }

    return 0;
}