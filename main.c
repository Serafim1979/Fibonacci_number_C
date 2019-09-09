#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////
int get_int(void);
/////////////////////////////////
int main()
{
    int N, i, a, b, c;
    printf("Enter N(-1 to quit):\n");

    while((N = get_int()) != -1)
    {
        for(a = 1, b = 0, i = 0; i < N; i++, a = b, b = c)
        {
            c = a + b;
            printf("%d ", c);
        }
        printf("\nEnter N(-1 to quit):\n");
    }
    printf("Bye!\n");
    return 0;
}
/////////////////////////////////
int get_int(void)
{
    int input;
    char ch;

    while(scanf("%d", &input) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not integer . \n Please enter an integer: ");
    }
    return input;
}
