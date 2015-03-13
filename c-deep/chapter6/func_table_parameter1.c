/*
 * test a function with table parameter 
 */
#include <stdio.h>

void fun(char [10]);

int main()
{
    char b[10] = "abcdefg";
    fun(b[10]);
    return 0; 
}

void fun(char a[10])
{
    char c = a[3];
    printf("sizeof a[10] = %d\n",sizeof(a));
    printf("a[3] = %c\n",c);
}
