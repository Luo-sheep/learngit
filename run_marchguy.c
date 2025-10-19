#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
    {
        printf("shuruba");
        int x;
        scanf("%d",&x);
        for (int i = 0; i <= x; i++)
        {
        system("cls");
        Sleep(100);
        for(int b=30;b>i;b--)
            {
                printf("  ");
            }
        printf(" O\n");
        for(int b=30;b>i;b--)
            {
                printf("  ");
            }
        printf("<H>\n");
        for(int b=30;b>i;b--)
            {
                printf("  ");
            }
        printf("I  I\n");
        }
        return 0;
    }