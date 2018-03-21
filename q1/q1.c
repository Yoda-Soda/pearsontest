/**********************************************************
 * File              : q1.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 20.03.2018
 * Last Modified Date: 20.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 **********************************************************/

#include <stdio.h>
int main(void) {
	int i;
	i = 100;
	if(i > 100)
		i -= 100;
	else if(i >= 0)
		i += 100;
	else if(i)
		i += 100;
	else
		i -= 100;
	printf("%d",i);
	return 0;
}

