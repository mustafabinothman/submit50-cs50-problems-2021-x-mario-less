#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input (pyramid size)
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);


    printf(" %i\n", n);

    //Making of a pyramid
    for (int i = 0; i < n; i++)
    {
        //Spaces for pyramid
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        //# for pyramid
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        //Make new line
        printf("\n");
    }

}
