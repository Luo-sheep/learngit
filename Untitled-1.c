#include <stdio.h>
#include <math.h>
int main() {
    // 在这里编写你的代码
    int a,b=1,c;
    scanf("%d",&a);
    while (b*b<=a)
    {
        b++;
    }
    if (a%2==0)
    {
        printf("NO");
    }

    else if (a<=2)
    {
        printf("YES");
    }
    
    else
    {
        for(int i=2;i<=b;i++)
        {
        if (a%i==0)
            {
                c=i;
                break;
            }
        else
            c=i;
        }
        if (a%c==0)
            printf("NO");
        else
            printf("YES");
    }
    return 0;
}