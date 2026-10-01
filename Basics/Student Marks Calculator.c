#include <stdio.h>
int main( ) {
    int rollNo;          // roll number: integer
    float sub1, sub2, sub3;   // marks: floating-point (can store decimals)
    float total, average;
// Input
    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);

    // Compute
    total = sub1 + sub2 + sub3;
    average = total / 3.0f;

    // Output
    printf("\n--- Student Marks ---\n");
    printf("Roll No   : %d\n", rollNo);
    printf("Subject 1 : %.2f\n", sub1);
    printf("Subject 2 : %.2f\n", sub2);
    printf("Subject 3 : %.2f\n", sub3);
    printf("Total     : %.2f\n", total);
    printf("Average   : %.2f\n", average);

    return 0;
}
