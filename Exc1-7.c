#include <stdio.h>
/* Упражнение 1.7. Напишите программу, печатающую значение EOF

Проверка выражения getchar() != EOF
Для получения 0, необходимо нажать Ctrl+D в Linux-e
или Ctrl+Z в Windows */

int main(void)
{
    int result;
    result = getchar();
    printf("%d\n", result);
}
