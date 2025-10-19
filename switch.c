#include <stdio.h>
#include <math.h>
int main() {
    // 在这里编写你的代码
    int a,b;
    scanf("%d",&a);
    if (a>100||a<0)
        printf("Error, grade must be between 0 and 100.");
    else
    {
        switch (a/10)
        {
        case 10:
        printf("Letter grade: A");
        break;
        case 9:
        printf("Letter grade: A");
        break;
        case 8:
        printf("Letter grade: B");break;
        case 7:
        printf("Letter grade: C");break;
        case 6:
        printf("Letter grade: D");break;
    
        default:
            printf("Letter grade: F");
            break;
        }
    }
    
    return 0;
}