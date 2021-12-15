#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
Заповнити матрицю з 7 строк і 7 стовпців випадковими числами
в інтервалі [-10,10] та вивести її на екран. Обнулити елементи,
відмічені зеленим фоном, і вивести отриману матрицю на екран.
*/

int main() {
  int array[7][7];
  srandom(time(NULL));
    printf("Початковий масив:\n");
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            array[i][j] = random()%21-10;
            printf(" %i", array[i][j]);
        }
        printf("\n");
    }
    int point = 7/2;
    for(int i = 0; i < 7; i++){
        for(int j = abs(point); j < 7-abs(point); j++){
            array[i][(7+j)%7] = 0;
        }
        point--;
    }
    printf("\n\n\n");
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            printf(" %i", array[i][j]);
        }
        printf("\n");
    }
}
