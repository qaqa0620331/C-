/* myc_1_1, 我的第一個C程式碼 */ 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   printf("恩師好!我是學生張洪鈞\n");   	/* 印出Hello 偉大的恩師! 字串 */
   printf("我的C300-1\n");        /* 印出Hello Taiwan! 字串 */   
   /* prog1_2, 程式格式的說明 */
 

   char ch;
   printf("Input a character:");
   scanf("%c",&ch);	  /*由鍵盤輸入字元並指定給變數ch*/
   printf("ch=%c, The ASCII code is %d\n",ch,ch);
   system("pause");
   return 0;



   system("pause");

}
