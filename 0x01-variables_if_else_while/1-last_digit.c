#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *
 *[AReturn: Always 0 (success/correct)[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D/
int main(void)

{
int n;[D[C

srand(time(0));
n = rand() - RAND_MAX / 2;[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[[[C [C[C[C[C[C[C[C[C[C[C[C[C[C[C rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
}
else if (n % 10 == 0)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n % 10[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[A[A[B[B[C[D[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[2~[C[C[C[C[A[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[A[A[D[D[D[A[D[D[A[B[B[C[D[A[A[B}[A[D0);[B[B[C[B[C[C[C[B[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C 0\n", n % 10);
}
else
{
printf("La %i and is less than 6 and not 0\n", [C[C[C[C[C[C[D[C[n, n % 10);
}
return(0);[D[C
}
