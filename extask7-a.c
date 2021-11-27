
#include <stdio.h>
#include <stdlib.h>

#define mmin 2
#define mmax 5
#define mpass 4.6f
#define n_max 100
    int n;
    int mark[n_max];

int main()
{
    printf("n: ");
    scanf("%d", &n);

    printf("mark: ");
    for (int i = 0; i < n; i++)
       scanf("%d", &mark[i]);
    printf("\n");

    int sum = 0;
    for (int i = 0; i < n; i++)
    sum += mark[i];

    float avg = (float) sum / (float) n;

    printf("avg: %0.1f\n", avg);
    if (avg < mpass)
    printf("no");
    else
    printf("yes");
return 0;
}
