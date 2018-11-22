```
#include <stdio.h>
 
int main()
{
  int c, n=5, fact = 1;
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", n, fact);
 
  return 0;
}
```

```
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int n=5,i,f;
    f=i=1;
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
    getch();
}
```

```
 #include<stdio.h>
 #include<conio.h>
 int main(void)
 {
    long int i,n=5,fact=1; /*variable declaration */

    /* do loop start */
    i=1;
    do
    {
       fact*=i;
       i++;
    }
    while(i<=n);
 
    printf("Factorial = %ld\n",fact);
    getch();
    }
 ```
 
 ```
 #include <stdio.h>
long int multiplyNumbers(int n);

int main()
{
    int n=5;
  
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
 ```
