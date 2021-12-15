#include <stdio.h>
//Ввести символьну строку і перевірити, чи є вона паліндромом
char palindrom(char s[], int n)
{
    for (int i = 0; i < n/2; i++){
        if(s[i] != s[n-1-i]){
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Введіть строку:\n");
    scanf("%s", str);
    int count = 0;
    while(str[count++]!='\0');
    if(palindrom(str, count - 1)){
        printf("Паліднорм.");
    }else{
        printf("Не паліднорм.");
    }
}
