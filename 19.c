#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Заповнити матрицю з 8 строк і 5 стовпців випадковими числами
в інтервалі [-10,10] і вивести її на екран.
Вивести на екран строку, сума елементів якої
максимальна. Формат виведення:
*/
int main() {
  int array[8][5], max = -51, idmax;
  srandom(time(NULL));
    printf("Початковий масив:\n");
    for(int i = 0; i < 8; i++){
        int sum = 0;
        for(int j = 0; j < 5; j++){
            array[i][j] = random()%21-10;
            sum += array[i][j];
            printf("%i ", array[i][j]);
        }
        printf("\n");
        if(max < sum){
            max =sum;  
            idmax=i;
        }  
    }
    printf("Строка %i: ", idmax+1);
    for (int i = 0; i < 5;i++){
        printf("%i ",array[idmax][i]);
    }
}
