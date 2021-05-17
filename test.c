#include <stdio.h>
int fact(int n){
    int f,i;
    f=1;
    for (i=1;i<n+1;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int f,n;
    printf("Enter n: ");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial of %d is %d",n,f);
    return 0;
}