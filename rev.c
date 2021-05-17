#include<stdio.h>
    int reverse(int n){
        int r_d=0,rem;
        while (n!=0){
            rem=n%10;
            r_d=r_d*10 + rem;
            n=n/10;
        }
        return r_d;
    }

int main(){
    int n, rev;
    printf("Enter a number: ");
    scanf("%d",&n);
    rev=reverse(n);
    printf("The reverse of %d is %d",n,rev);

    return 0;
}