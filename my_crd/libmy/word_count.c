#include <stdio.h>
#include <stdlib.h>
#include "../my_list.h"

int word_count(const char *str)
{
    int i = 0;
    int count = 1;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    return count;
}