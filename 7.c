#include <stdio.h>
#include <math.h>
#include <fenv.h>
//Ввести ціле число А і вивести суму квадратів усіх чисел від 1 до А з кроком 0.1 
int main()
{
    int n = 0;
    float res = 0;;
    printf("Ввеідть останє число: \n");
    scanf("%i", &n);
    for(float i = 1; i < n;i += 0.1){
        res +=pow(i,2); 
    }
     printf("%.1f", res);
}
