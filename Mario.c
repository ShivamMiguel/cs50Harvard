#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do{
        n = get_int(" de 1 a 8 insira uma altura:");
    }

    while(n < 1 || n > 8);


         for(int i = 0; i < n ; i++)
         {
             for(int j = 0; j < n; j++ )
             {
                   if(i+j < n-1)
                printf(" ");
             else
                printf("#");

             }
                printf("\n");

         }


}
