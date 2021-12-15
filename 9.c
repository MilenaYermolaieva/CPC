#include <stdio.h>
#include <math.h>
//Ввести два цілих числа і вивести суму квдартів від першого до другого, де перший менший за друге 
int main()
{
    int a, b, res = 0;
    printf("Ввеідть два числа: \n");
    scanf("%i", &a);
    scanf("%i", &b);
    for(int i = a; i <= b; i++){
        res += pow(i,2);
    }
    printf("%i", res);
}
