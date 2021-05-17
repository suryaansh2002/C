#include<stdio.h>
struct Books
{
    int no;
    char name[20];
    float price;
    char author[20];
    int copies;
}book[20];
    

int main(){
int n,i,n2,j,flag=0;
i=0;
while (1)
{
    printf("Do you want to enter another input (Enter 1) or Quit the program (Enter 0): ");
scanf("%d",&n);
if(n==0){
    break;
}
else{
    printf("Enter Book No,Book Name, Price, Authors, and number of Copies:\n");
    scanf("%d\n",&book[i].no);
    gets(book[i].name);
    scanf("%f\n",&book[i].price);
    gets(book[i].author);
    scanf("%d",&book[i].copies);
    i++;
}
}
for(j=0;j<i;j++){
    printf("Number: %d, Name: %s, Price: %.2f, Author: %s, No. of Copies: %d \n", book[j].no,book[j].name,book[j].price,book[j].author, book[j].copies);
}
printf("Enter the book number you want to buy:");
scanf("%d",&n2);
for(j=0;j<i;j++){
    if(book[j].no==n2){
    printf("Details of your book are: \n");
    printf("Number: %d, Name: %s, Price: %.2f, Author: %s, No. of Copies: %d \n", book[j].no,book[j].name,book[j].price,book[j].author, book[j].copies);
    flag=1;
    }
}
if (flag==0)
{
    printf("Sorry This book number is not present");
}


return 0;
}