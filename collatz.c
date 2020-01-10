#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long long int n = strtoll(argv[1], NULL, 10);
    long long int iterations = strtoll(argv[2], NULL, 10);

    printf("caclculate with n = %lld, doing %lld iterations\n", n, iterations);

    for (int i = 0; i <= iterations; i++) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n;
            n++;
        }

        printf("iteration %lld, n = %lld\n", i, n);
    }

    return 0;
}
