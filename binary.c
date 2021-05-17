#include<stdio.h>
int dec_to_bin(int n){
int b=0;
while (n>0)
{
    b=(b*10)+(n%2);
    n=n/2;
}
return b;

}
int main(){
int num,b;
printf("Enter a number:");
scanf("%d",&num);
b=dec_to_bin(num);
printf("Binary is %d",b);
}