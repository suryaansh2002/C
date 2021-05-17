#include<stdio.h>
int gcd(int a,int b){
    if (a==0){
        return b;
    }else if(b==0){
        return a;
    }
    else{
        return (gcd(b,a%b));
    }
}
int main(){
    int a,b,g;
    printf("Enter a,b:");
    scanf("%d %d",&a,&b);
    g=gcd(a,b);
    printf("GCD is %d",g);
    return 0;
}