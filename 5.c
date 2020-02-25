#include <stdio.h>
main() {
    int age;
    printf("Input your age: ");
    scanf("%d", &age);
    if (25 <= age && age <= 40)
        printf("You're good for us!\n");
    else
        printf("Sorry, you're not a good fit.\n");
    getchar();
}
