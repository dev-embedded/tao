/*
 * test a function with table parameter 
 */
#include <stdio.h>

void fun(char);

int main()
{
    char b[10] = "abcdefg";
    printf("address of b[4] = %p\n",&b[4]);
    fun(b[4]);
    return 0; 
}

void fun(char a)
{
    char c = a;
    printf("sizeof int = %ld\n",sizeof(int));
    printf("a[4] = %c\n",c);
    printf("address of a = %p\n",&a);
}
