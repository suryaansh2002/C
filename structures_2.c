#include<stdio.h>
struct Book
{
    char title[20];
    char author[20];
    int pages;
    float price;
}b1;

int main(){
printf("Enter PAges and price for B1:");
scanf("%d %f\n",&b1.pages,&b1.price);
gets(b1.title);
gets(b1.author);
printf("Details of  Book are: \n");
printf("Title: %s  Author: %s  Pages: %d  Price: %f\n",b1.title,b1.author,b1.pages,b1.price);


return 0;
}