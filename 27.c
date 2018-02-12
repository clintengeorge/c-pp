#include<stdio.h>
#include<conio.h>
#include <ctype.h>
int numbers_only(const char *s)
{
    while (*s) 
    {
        if (isdigit(*s++) == 0) return 0;
    }

    return 1;
}
