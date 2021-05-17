#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (i = 0; i<n+1; i++)
    {
        for(j=0;j<i+1;j++){
            printf(" ");
        }
        for(k=j; k<n+1;k++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}