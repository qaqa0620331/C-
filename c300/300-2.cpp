/* prog1_2, �{���榡������ */
#include <stdio.h>	/* �Nstdio.h�o���ɮקt�A�i�� */
#include <stdlib.h>	/* �Nstdlib.h�o���ɮקt�A�i�� */
int main(void)  		  
{
   char ch;
   printf("���v�n!�ڬO�ǥͱi�x�v\n");   	/* �L�XHello ���j�����v! �r�� */
   printf("�ڪ�C300-2\n");        /* �L�XHello Taiwan! �r�� */   
   
   
   printf("Input a character:");
   scanf("%c",&ch);	  /*����L��J�r���ë��w���ܼ�ch*/
   printf("ch=%c, The ASCII code is %d\n",ch,ch);
   system("pause");
   return 0;
}
