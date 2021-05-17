#include<stdio.h>
void fn(int a,int b,int *s,int*d);
int main(){
    int a,b,s,d;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a,&b);
    fn(a,b,&s,&d);
    printf("The sum is %d\n",s);
    printf("The diff is %d",d);
    return 0;
}
void fn(int a, int b, int *s,int *d){
    *s=a+b;
    *d=a-b;
} 