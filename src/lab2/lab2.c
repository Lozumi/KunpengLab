// KunpengLab Lab2
#include <stdio.h>

int main(int argc, char *argv[])
{
    int n = *argv[1] - '0';
    int fact = 1;
    int i = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("%d\n", fact);
    return 0;
}
