#include<stdio.h>
int cube_sum(int n){
    int i, r,sum=0;
    while (n>0)
    {
        r=n%10;
        sum= sum + (r*r*r);
        n=n/10;

    }
     
    return sum;

}

int main(){

    int num, rev,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for (i = 0; i < num; i++)
    {
        if(i==cube_sum(i)){
            printf("%d \n",i);
        }
    }
    
    return 0;
}