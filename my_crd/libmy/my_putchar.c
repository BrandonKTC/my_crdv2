#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void my_putchar(char c) {
 write(1, &c, sizeof(c));
}