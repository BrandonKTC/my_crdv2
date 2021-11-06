#include <stdio.h>
#include <stdlib.h>
#include "../my_list.h"

int main() {
	linked_list_t *list = NULL;
	char *line = NULL;
	size_t n = 0;
	char **tab;
	char **c;
	char **d;
	char *a;
	char *b;
	char *supp;
	char *data;
	int tour; 
	int tour_eve; 
	int tour_data; 
	int read;
	tour= 0;
	int init = 0;
	supp = "D";

	while(getline(&line,&n,stdin) != -1) 
{	
	
	if (init == 0) {
		init =1;
		c = malloc(word_count(line) * sizeof(char *) + 1);
		d = malloc(word_count(line) * sizeof(char *) + 2);
		tab = malloc(word_count(line) * sizeof(char *) + 2);
		data = malloc(word_count(line) * sizeof(char *) + 2);
 	}
	tour_eve = 0;
	tour_data = 0;
	read = 0;
	tab = my_str_to_word_array(line);
	a = tab[0];
	b= tab[1];
	while (tour_eve < tour){
		if (my_strcmp(c[tour_eve],a)==0){
				read = 1;
				data = d[tour_eve];
				tour_data = tour_eve;
				}
			tour_eve+=1;
			}



	if(NULL == b){
		if (read==1) {
			my_putstr(data);
			my_putchar('\n');		
		}
		else	{
			my_putstr("-1");
			my_putchar('\n');
		}
	}
	else{
		if ('D'== b[0]){
			if ('D'== b[0] && read == 0) {
				my_putstr("-1");
				my_putchar('\n');
			}
			else{
			c[tour_data]=a;
			d[tour_data]="-1";
			my_putstr(data);
			my_putchar('\n');
			read = 0;}
			}

		else{
			my_putstr(a);
			my_putchar('\n');
			c[tour]=a;
			d[tour]=b;
			tour +=1;
			}
		}
	
	}
free(line);
}