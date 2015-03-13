/*
 * test structure's size  
 *
 */

#include <stdio.h>

int main()
{
    struct Test1
    {
        char a;
        int b;
    };

    struct Test2
    {
        char c;
        struct Test1 d;
        int e;
    };

    printf("sizeof struct Test1 : %ld\n",sizeof(struct Test1));
    printf("sizeof struct Test2 : %ld\n",sizeof(struct Test2));
    return 0;
}
