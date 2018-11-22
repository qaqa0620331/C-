```
#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
```

```
#include<stdio.h>
#include<conio.h>
main()
{
    int f1=0,f2=1,f3,i=3,len;
    printf("enter length of the  fibonacci series:");
    scanf("%d",&len);
    printf("%d\t%d",f1,f2); // It prints the starting two values
    while(i<=len)           // checks the condition
    {
        f3=f1+f2;               // performs add operation on previous two  values
        printf("\t%d",f3);      // It prints from third value to given length
        f1=f2;
        f2=f3;
        i=i+1;                  // incrementing the i value by 1
    }
    getch();
}
```

```
#include<stdio.h>
#include<conio.h>
 
int main(void)
{
    int n,f,f1=-1,f2=1;
 
    printf("  Enter The Number Of Terms:");
    scanf("%d",&n);
     
    printf("  The Fibonacci Series is:");
     
    do
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("  \n %d",f);
        n--;
    }while(n>0);
    getch();
}
```

```
#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, i = 0, c;
 
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
```
