#include "my_list.h"
#include <stdlib.h>
#include <stdio.h>

int is_num(char *str)
	{
		if (str[0] >= '0' && str[0] <= '9' )
			return (1);
		return (0);
	}