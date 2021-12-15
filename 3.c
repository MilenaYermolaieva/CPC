#include <cs50.h>
#include <stdio.h>
int main()
  //Увести п’ять чисел і знайти найбільше з них.
{
    int m,n,l,k,r;
    printf("Введіть 5 чисел: \n");
    scanf("%i%i%i%i%i", &m,&n,&l, &k, &r);
    if ( m > n && m > l && m > k && m > r)
    {
        printf("Найбільше число %i\n", m);
    }
    else if (n > m && n > l && n > k && n > r)
    {
        printf("Найбільше число %i \n", n );
    }
    else if (l > m && l > m && l > k && l > r)
    {
        printf("Найбільше число %i \n", l );
    }
    else if (k > m && k > m && k > l && k > r)
    {
        printf("Найбільше число %i \n", k );
    }
    else
    {
        printf("Найбільше число %i \n", r );
    }
}
