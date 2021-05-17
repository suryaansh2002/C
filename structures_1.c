#include<stdio.h>
struct Student
{
    int rollno;
    int age;
    char name[20];
    float height;
}s1;

int main(){
struct Student s2;
printf("Enter Values for S1:\n");
scanf("%d %d %s %f",&s1.rollno,&s1.age,s1.name,&s1.height);
printf("Enter Values for S2:\n");
scanf("%d %d %s %f",&s2.rollno,&s2.age,s2.name,&s2.height);
printf("Details:\n");
printf("Details of Student 1 are: \n");
printf("Roll No: %d  Age: %d  Name: %s  Height: %f\n",s1.rollno,s1.age,s1.name,s1.height);
printf("Details of Student 2 are: \n");
printf("Roll No: %d  Age: %d  Name: %s  Height: %f\n",s2.rollno,s2.age,s2.name,s2.height);


return 0;
}