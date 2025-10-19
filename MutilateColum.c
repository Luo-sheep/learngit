#include <stdio.h>
int main()
    {
        printf("9 by 9 Multiplication Table\n");
        for (int i = 0; i < 10; i++)
        {
            for (int b = 1; b <= i; b++)
            {
                printf("%d*%d=%d ",i,b,i*b);
            }
            printf("\n");
        }
        return 0;
    }