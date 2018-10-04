/* prog3_2, 短整數資料型態的溢位*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   printf("恩師好!我是學生張洪鈞\n");   	/* 印出Hello 偉大的恩師! 字串 */
   printf("我的C300-7\n");        /* 印出Hello Taiwan! 字串 */   
   
   short sum,s=32767;        /* 宣告短整數變數sum與s */
   
   sum=s+1;
   printf("s+1= %d\n",sum);	/* 列印出sum的值 */
   
   sum=s+2;
   printf("s+2= %d\n",sum); 	/* 列印出sum的值 */   

   system("pause");
   return 0;
}


