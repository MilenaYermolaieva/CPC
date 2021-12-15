#include <stdio.h>
int main(void)
  //Ввести три числа, знайти їх суму, добуток і середнє арифметичне.
{
    float n, m, l;
    printf("Введіть три числа: ");
    scanf("%f%f%f", &n, &m, &l);
    printf("Сума: %.2f\n", m + n + l);
    printf("Добуток: %.2f\n", m * n * l);
    printf("Середнє арифметичне: %.2f\n", (m + n + l)/3);
}
