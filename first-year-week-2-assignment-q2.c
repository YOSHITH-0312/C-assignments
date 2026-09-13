#include<stdio.h>
int main() {
    printf("enter time in hours:\n");
    float a;
    scanf("%f",&a);
    printf("enter speed in km/h:\n");
    float b;
    scanf("%f",&b);
    float c=a*b;
    float d=c*1000;
    printf("Distance in meters:%.2f m",d);
    float e=d*100;
    printf("Distance in centimeters:%f cm",e);
    float f=e*10;
    printf("Distance in millimeters:%f mm");
}