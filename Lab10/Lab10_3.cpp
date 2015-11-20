#include<stdio.h>
int main()
{
    int a=100;
    int b=55;
    int c=5;
    int *p1=&a;
    int *p2;
    int *p3=&c;
    p2=&b;
    p2=p1;
    b=*p3;
    *p2=*p3;
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    return 0;
}