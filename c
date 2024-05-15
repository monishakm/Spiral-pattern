#include <stdio.h>

#define SIZE 10

int main() {
    int pattern[SIZE][SIZE] = {0};
    int i, j, m, n, p, q, s, num;
    printf("Enter the size of the pattern: ");
    scanf("%d", & s);
    num = 1; 
    i = 0; 
    j = 0; 
    m = 0; 
    n = s - 1; 
    p = 0;
    q = s - 1; 

    
    while (num <= s * s) {
    
        for (j = p; j <= q; j++) {
            pattern[m][j] = num;
            num++;
        }
        m++;

        for (i = m; i <= n; i++) {
            pattern[i][q] = num;
            num++;
        }
        q--;
        for (j = q; j >= p; j--) {
            pattern[n][j] = num;
            num++;
        }
        n--;
        for (i = n; i >= m; i--) {
            pattern[i][p] = num;
            num++;
        }
        p++;
    }
    printf("\n");
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            printf("%d\t", pattern[i][j]);
        }
        
        printf("\n");
    }
    return 0;
}

