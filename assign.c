#include<stdio.h>
int main()
{
    struct place{
    int pin= 576104;
    char city[]= "Manipal";
    };
    struct place p1;
    printf("%s",p1.city);
    printf("%d", p1.pin);
    return 0;
    }