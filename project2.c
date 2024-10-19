#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    printf("plz input 2 code:>");
    sscanf_s("%d %d", &a, &b);
    sum = a + b;
    printf("sum = %d\n", sum);
    return 0;
}