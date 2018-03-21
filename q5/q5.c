/**********************************************************
 * File              : q5.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 20.03.2018
 * Last Modified Date: 20.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 **********************************************************/

#include <stdio.h>
int main(void) {
 int i=10,j=20,*p,s=0;
 p = &i;
 i++;
 (*p)++;
 s = i + j + *p;
 printf("%d",s);
 return 0;
}

