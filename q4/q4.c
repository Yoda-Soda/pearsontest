/**********************************************************
 * File              : q4.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 20.03.2018
 * Last Modified Date: 20.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 **********************************************************/

 #include <stdio.h>
 int main(void) {
 int i,t[5];
 for(i = 0; i < 5; i++){
	 t[i] = 2 * i;
	 printf("%d",t[i]);
 }
 i = 0;
 putchar('\n');
 for(i = 0; i < 5; i++)
 {
	 i += t[i];
	 printf("%d",i);
	 putchar('\n');
 }
 printf("%d",i);
 return 0;
 }

