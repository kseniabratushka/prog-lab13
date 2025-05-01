#include <stdio.h>

double sum(int n) 
{
    if (n == 1)
        return 1.0 / 2.0;
    else
        return (double)n / (n + 1) + sum(n - 1);
}

int main() 
{
    system ("chcp 65001");
    int n;
    printf("Введіть n: ");
    scanf("%d", &n);

    double result = sum(n);
    printf("S = %lf\n", result);
    return 0;
}
