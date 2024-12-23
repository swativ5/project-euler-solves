#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long int n = 600851475143;
    // 600851475143
    int max = -1;

    while (n % 2 == 0)  {
        max = 2;
        n = n / 2;
    }

    while (n % 3 == 0)  {
        max = 3;
        n = n / 3;
    }

    for (int i = 5; i <= sqrt(n); i += 6)   {
        while (n % i == 0)  {
            max = i;
            n = n / i;
        }
        while (n % (i + 2) == 0)  {
            max = i + 2;
            n = n / (i + 2);
        }
    }

    if (n > 4)  {
        max = n;
    }

    printf("%d", max);
    return 0;
}
