#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate combination (nCr)
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int T; // Variable for the number of test cases
    scanf("%d", &T);
    
    while (T > 0 && T < 11) {
        int N;
        scanf("%d", &N);
        if (N > 1 && N < 12) {
            printf("%d\n", 2 * (nCr(N, 2)));
        }
        T--;
    }

    return 0;
}



