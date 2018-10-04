/* prog2_2, 函數的本體與程式區塊 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i=2;	/* 宣告整數i，並設值為2 */
   if(i<5)	/* if區塊由此開始 */
   {
      printf("恩師好!我是學生張洪鈞\n");   	/* 印出Hello 偉大的恩師! 字串 */
      printf("我的C300-1\n"); 
	  printf("變數i的值小於5"); 
      printf("\n");	/* 換行 */
   }				/* if區塊結束 */
   system("pause");
   return 0;
}
