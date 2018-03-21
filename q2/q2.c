/**********************************************************
 * File              : q2.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 20.03.2018
 * Last Modified Date: 20.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 **********************************************************/

 #include <stdio.h>
 int main(void) {
 int i = -100, j = 200;
 if(i > 0 && j < 0)
 i++;
 else if(i < 0 && j < 0)
 i--;
 else if(i < 0 && j > 0)
 j--;
 else
 j--;
 printf("%d",i + j);
 return 0;
 }

