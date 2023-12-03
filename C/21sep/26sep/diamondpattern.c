#include <stdio.h>

int main() {
    int n;
    printf("Enter the levels: ");
    scanf("%d", &n);

    for (int row = 1; row <= 2 * n; row++) { 
        int columnInRow = (row > n) ? (2 * n - row) : row;

        for (int s = 1; s <= n - columnInRow; s++) { 
            printf("  ");
        }

        for (int col = columnInRow; col >= 1; col--) {
            printf("%d ", col);
        }

        for (int col = 2; col <= columnInRow; col++) {
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}
