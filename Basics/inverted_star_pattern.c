#include <stdio.h>

int main() {
    int i, j;
    int rows = 3;  // Number of rows

    // Outer loop for rows
    for (i = rows; i >= 1; i--) {
        // Inner loop for stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
