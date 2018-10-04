/* prog1_2, 程式格式的說明 */
#include <stdio.h>	/* 將stdio.h這個檔案含括進來 */
#include <stdlib.h>	/* 將stdlib.h這個檔案含括進來 */
int main(void)  		  
{
   char ch;
   printf("恩師好!我是學生張洪鈞\n");   	/* 印出Hello 偉大的恩師! 字串 */
   printf("我的C300-2\n");        /* 印出Hello Taiwan! 字串 */   
   
   
   printf("Input a character:");
   scanf("%c",&ch);	  /*由鍵盤輸入字元並指定給變數ch*/
   printf("ch=%c, The ASCII code is %d\n",ch,ch);
   system("pause");
   return 0;
}

