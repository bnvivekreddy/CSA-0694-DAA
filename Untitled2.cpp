#include <stdio.h>

#define MAX 9  
 
int binomialCoefficient(int n, int k) {
    int dp[MAX][MAX];  
    
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;  
        dp[i][i] = 1;  
    }

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }

    // Return the result for C(n, k)
    return dp[n][k];
}

int main() {
    int n = 8;
    int k = 8;

    int result = binomialCoefficient(n, k);

    printf("C(%d, %d) = %d\n", n, k, result);

    return 0;
}

