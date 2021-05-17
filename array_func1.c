#include<stdio.h>
int rowsum(int a[10][10],int m,int n);
int colsum(int a[10][10],int m,int n);
int main(){
    int a[10][10],m,n,i,j;
    printf("Enter The Dimensions of the matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter The elements:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("The array is:\n");
    for (i = 0; i <m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    rowsum(a,m,n);
    printf("\n");
    colsum(a,m,n);
    return 0;
}
int rowsum(int a[10][10],int m,int n){
    int i,j,sum;
    printf("Sum of Rows: ");
    for(i=0;i<m;i++){
        sum=0;
        for(j=0;j<n;j++){
            sum+=a[i][j];
        }
        printf("%d ",sum);
    }
}
int colsum(int a[10][10],int m,int n){
    int i,j,sum;
    printf("Sum of Columns: ");
    for(j=0;j<n;j++){
        sum=0;
        for(i=0;i<m;i++){
            sum+=a[i][j];
        }
        printf("%d ",sum);
    }
}
