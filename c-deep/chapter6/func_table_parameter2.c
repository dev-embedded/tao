/*
 * test a function with table parameter 
 */
#include <stdio.h>

void fun(char[]);

int main()
{
    char b[10] = "abcdefg";
    printf("address of b[10] = %p\n",b);
    fun(b);
    return 0; 
}

void fun(char a[])
{
    char c = a[3];
    printf("sizeof int = %ld\n",sizeof(int));
    printf("sizeof a[10] = %ld\n",sizeof(a));
    printf("a[3] = %c\n",c);
    printf("address of a[10] = %p\n",a);
}
