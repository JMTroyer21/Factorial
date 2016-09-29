#include <stdio.h>

long long
factorial(long long n)
{
long long i;
long long product;
if(n < 2) return n;
/* else */
product = 1;
for(i = 2; i <= n; i++) {
product *= i;
}
return product;
}


int main(void) 
{
   long long a;

   printf("Please input an integer value: ");
   scanf("%d", &a);
   printf("You entered: %d\n", a);
   
   printf("factorial of %d equals %u\n", a, factorial(a));
   
   
   return 0;
}