```
#include<stdio.h>
int main()
{
    int base, exponent, i, power;

   
    //caculatinh power of given number using for loop
    for(i=1; i<=5; i++)
        power = power * 2;

    printf("2**5= : %d", power);
    return 0;
}

```

```
#include<stdio.h>
int main()
{
    int base, exponent,power, i;

    power = 1;
    i = 1;
    //caculatinh power of given number
    while(i <= 5)
    {
        power = power * 2;
        i++;
    }
    printf("Power : %d", power);
    return 0;
}

```

```
#include<stdio.h>
#include<conio.h>
int main(void)
{
     int base, exponent,power, i;
 
      power = 1;
    i = 1;
    //caculatinh power of given number
    while(i <= 5)
    //LOOP TO CALCULATE THE FACTORIAL OF A NUMBER
    do
    {
        power = power * 2;
        i++;
    }
	while(i<=base);
    
    printf("Power : %d", power);
    return 0;
    getch();
}

```

```
#include <stdio.h>

int power(int n1, int n2);

int main()
{
    int base=2, powerRaised=5, result;

 
    result = power(base, powerRaised);

    printf("%d**%d = %d", base, powerRaised, result);
    return 0;
}

int power(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*power(base, powerRaised-1));
    else
        return 1;
}
```
