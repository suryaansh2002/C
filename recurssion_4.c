#include<stdio.h>
int length(char str[], int index){
    if (str[index]=='\0'){
        return 0;
    }
    else{
        return (1+length(str,index+1));
    }
}
int main(){
    char str[30];
    int count;
    printf("Enter string:");
    gets(str);
    count=length(str,0);
    printf("Length of string is %d",count);
    return 0;
}