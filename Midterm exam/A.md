```
#include <stdio.h>
#include <math.h>
 
int main()
{
     int a, d, n, i, tn;
     int sum = 0;

     sum = (401 * (2 * 1 + (401 - 1)* 4 ))/ 2;
     tn = 1 + (401 - 1) * 4;
       for (i = 1; i <= 401;i = i + 4 )
     {
          if (i != 401)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
```
