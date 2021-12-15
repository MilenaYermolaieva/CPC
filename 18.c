#include <stdio.h>

//Ввести ціле число і визначити, чи правильно, що в його запису є дві однакові цифри, що НЕ обов’язково стоять рядом.

char samenumber(char s[], int n)
{
    for (int i = 0; i < n; i++){
        for (int q = i + 1; q < n; q++){
            if(s[i]==s[q]) return 1;
        }
    }
    return 0;
}

int main() {
  char str[100];
    printf("Введіть ціле число :\n");
    scanf("%s", str);
    int count = 0;
    while(str[count++]!='\0');
    if(samenumber(str, count - 1)){
        printf("Так.");
    }else{
        printf("Ні.");
    }
}
