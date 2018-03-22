/**
 * File              : q8.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 21.03.2018
 * Last Modified Date: 21.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 */

#include <stdio.h>
int main(void) {
	int t[2][2]; 
	int i,j,s = 0;
	for(i = 0; i < 2; i++) 
		for(j = 1; j >= 0; j--)
		{
			t[i][j] = 2 * j + 1;
			printf("value: %d\n",t[i][j]);
			printf("i: %d\n",i);
			printf("j: %d\n",j);
		}	
	printf("%d",t[1][0]);  
	return 0;
}

