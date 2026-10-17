#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

void homework()
{
    int A, B;
    int condition;

    printf("Введите номер кнопки игрока A: ");
    scanf("%d", &A);

    printf("Введите номер кнопки игрока B: ");
    scanf("%d", &B);

    condition = (A % 2 == 0 && B % 2 != 0) ||
        (A % 2 != 0 && B % 2 == 0);

    printf("Победа в раунде (1 - да, 0 - нет): %d\n", condition);
}

int main()
{
    setlocale(LC_ALL, "RUS");

    homework();

    return 0;
}