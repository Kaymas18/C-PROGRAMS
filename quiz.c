#include<stdio.h>

#include<string.h>

int main() {

    char a[10];

    char *b = "abcd2020";

    int length = strlen(b);

    for(int i = 0; i < length; i++) {

         a[i] = b [length - i];

      }

    printf("%s", a + 1);

}
