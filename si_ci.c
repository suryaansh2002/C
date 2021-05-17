#include<stdio.h>
#include<math.h>
void ci_si(int p,float r,float t,float *s,float *c){
    *s=(p*r*t)/100;
    *c=p*pow(1+(r/100),t)-p;
}
int main(){
    int p,t;
    float r,si,ci;
    printf("Enter P, R, T:");
    scanf("%d %f %d", &p,&r,&t);
    ci_si(p,r,t,&si,&ci);
    printf("The compund interest is %f and simple interest is %f",ci,si);

}