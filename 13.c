#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Написати процедуру, яка ставить на початок масиву всі парні елементи, а у кінець – всі непарні
int sort( int N[], int n)
{
    int pP = 0, pN = n - 1 ;
    int M[n];
    for(int i = 0; i < n; i++){
        if(N[i] % 2 == 0){
            M[pP++] = N[i];
        }else{
            M[pN--] = N[i];
        }
    }
    for(int i = 0; i < n; i++){
        N[i]=M[i];
    }
    return 0;
}
int main()
{
    int r[12];
    srandom(time(NULL));
    printf("Початковий масив:\n");
    for(int i = 0; i < 12; i++){
        r[i] = random()%21 - 10;
        printf("%i ", r[i]);
    }
    sort(r, 12);
    printf("\nРезультат:\n");
    for(int i = 0; i < 12; i++){
        printf("%i ", r[i]);
    }
}
