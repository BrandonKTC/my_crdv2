#ifndef my_list
#define my_list

typedef struct linked_list {
    int key;
    char *value;
    struct linked_list *next;
} linked_list_t;

void my_putchar(char c);
void my_putstr(const char *str);
int my_getnbr(const char *str);
void my_putnbr(int nb);
int word_count(const char *str);
int is_num(char *str);
int my_strcmp(const char *s1, const char *s2);
char **my_str_to_word_array(const char *str);

#endif