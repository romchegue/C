#include <stdio.h>
main() {
    float A, B;
    printf("Input A and B: ");
    scanf("%f%f", &A, &B);
    if (A > B) {
        printf("Largest number is %f\n", A);
        }
    else {
        printf("Largest number is %f\n", B);
    } 
    getchar();
}
