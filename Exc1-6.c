#include <stdio.h>
/* Упражнение 1.6. Убедитесь в том, что выражение 
getchar() != EOF получает значение 0 или 1. 

Проверка выражения getchar() != EOF
Для получения 0, необходимо нажать Ctrl+D в Linux-e
или Ctrl+Z в Windows */

int main(void)
{
    int result;
    result = (getchar() != EOF);
    if (result == 0)
        printf("Равно 0\n");
    if (result == 1)
        printf("Равно 1\n");
}
