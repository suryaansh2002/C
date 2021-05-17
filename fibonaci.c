#include<stdio.h>

int fibonaci(int);


int main(){
    int n, rev;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibonaci(n);    

    return 0;
}
    int fibonaci(int n){
        int first=0,second=1,next,i;
        for(i=0;i<n;i++)
        {
            printf("%d \t",second);
            next=first+second;
            first=second;
            second=next;
        }
        
    }
