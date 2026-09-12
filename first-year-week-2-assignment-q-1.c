#include<stdio.h>
int main(){ 
    printf("Enter temperature in Fahrenheit:");
    float a;
    scanf("%f",&a);
    float b=(a-32)*5/9;
    printf("---conversion result---\n");
    printf("Fahrenheit:%.2f\n",a);
    printf("celsius:%.2f",b);
    return 0;
}
