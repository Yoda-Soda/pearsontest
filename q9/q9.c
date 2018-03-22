/**
 * File              : q9.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 21.03.2018
 * Last Modified Date: 21.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
       	char 	*p;
	int    i;
	p = (char *)malloc(10);
	for(i = 0; i < 10; i++)
	       	p[i] = 'A' + i;
	printf("%c",*(p+9));
	free(p);
	return 0;
}

