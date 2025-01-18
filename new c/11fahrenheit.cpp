#include<stdio.h>
int main(){
    float tc,tf;
    printf("enter temperature in fahrenheit");
    scanf("%f,&tf");
    tc=(tf-32)/1.8;
    printf("\n temperature in centigrade :%f",tc);
    return 0;
}