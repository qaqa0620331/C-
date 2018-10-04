/* prog3_3, 字元的列印*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   printf("恩師好!我是學生張洪鈞\n");   	/* 印出Hello 偉大的恩師! 字串 */
   printf("我的C300-8\n");        /* 印出Hello Taiwan! 字串 */ 
   char ch='a';				/* 宣告字元變數ch，並設值為'a' */
   printf("ch= %c\n",ch);		/* 印出ch的值 */ 
   printf("ASCII of ch= %d\n",ch);		/* 印出ch的十進位值 */
   
   system("pause");
   return 0;
}

