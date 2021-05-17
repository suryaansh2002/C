#include<stdio.h>
int linearsearch(int arr[],int x,int len)
{
    int index;
    for(index=0;index<len; index++)
    {
       if(x==arr[index])
        {
            return (index);
        }
    }
    return(-1);
}

int binarysearch(int arr[],int x,int len) // first sort
{
	int index, upper, lower, mid;
    upper=len-1; lower=0;
    while( lower<=upper )
    {
        mid =(lower + upper)/2;
        if(x > arr[mid])
        {
         lower = mid+1;

        }
        else if(x < arr[mid])
        {
        upper = mid-1;
        }         
        else 
        {
            return(mid);
        }
    }
    return(-1);
}


int bubblesortdec(int arr[],int len)
{
    int  i, j, temp;
    for(i=0; i<len; i++)
    {
        for(j=0; j<len-1-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } 
   
}


int main(){
int len, arr[100], i, check,r,x;
printf("Enter the number of elements in the array: ");
scanf("%d",&len);
printf("Enter the array elements: ");
for (i=0;i<len;i++){
    scanf("%d",&arr[i]);
}
printf("Enter 1 for Linear Search, 2 for Binary Search, 3 for Bubble Sort 4 to exit: ");
scanf("%d",&check);
if(check==1){
    printf("Enter the element you want to search for: ");
    scanf("%d",&x);

    r=linearsearch(arr,x,len);
    if(r==-1){
        printf("Element Not found");
    }    
    else{
        printf("Element found at index %d",r);
    }
}
else if(check==2){
    printf("Enter the element you want to search for: ");
    scanf("%d",&x);

    r=binarysearch(arr,x,len);
    if(r==-1){
        printf("Element Not found");
    }    
    else{
        printf("Element found at index %d",r);
    }
}
else if(check==3){

    bubblesortdec(arr,len);
    printf("The sorted array is \n");
    for ( i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
else if(check==4){
    printf("Bye Bye SEarchNSort");
}
else{
    printf("Invalid input");
}

}
