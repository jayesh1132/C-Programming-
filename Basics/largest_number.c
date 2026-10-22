
#include <stdio.h>

int main() {
    int n, num, largest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter %d positive integers:\n", n);
    scanf("%d", &largest);

    for (int i = 2; i <= n; i++) {
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }
    }

    printf("Largest number = %d\n", largest);

    return 0;
}
