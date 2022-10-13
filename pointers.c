#include<stdio.h>
int main()
{
    int a=78;
    int *p=&a;
    int *p2=NULL;
    printf("value of a is %d ",*p);
    printf("value of address of a is %p ",p);
    printf("value of address of p is %x ",&p);
    printf("valur of null pointer %d ", *p2);
}

