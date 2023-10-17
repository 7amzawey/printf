#include "main.h"
#include <stdio.h>

int main(void)
{
    char c = 'A';
    char *str = "OpenAI";
    int i = 1;
    int d = 5;

    _printf("Character: %c\n", c);
    _printf("String: %s\n", str);
    _printf("Percent sign: %%\n");
    _printf("int: %d\n", d);
    _printf("decimal: %i\n", i);

    return (0);
}
