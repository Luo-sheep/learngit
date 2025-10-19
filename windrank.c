/*#include <stdio.h>
#include <math.h>
int main() {
    // 在这里编写你的代码
    int a,b;
    
    printf("Enter a wind speed: ");
    scanf("%d",&a);
        switch (a)
        {
        case (<=1):
        printf("Calm");
        break;
        case 1:
        printf("Light air");
        break;
        case 2:
        printf("Breeze");
        break;
        case :
        printf("Letter grade: C");
        break;
        case 6:
        printf("Letter grade: D");
        break;
    
        default:
            printf("Letter grade: F");
            break;
        }
    
    
    return 0;
}
    喵的！switch只能用数，而且这题区间没规律啊*/
    #include <stdio.h>

int main() {
    float speed;
    
    printf("Enter a wind speed: ");
    scanf("%f", &speed);
    
    // 将浮点数转换为整数以便在switch中使用
    int category;
    
    if (speed < 1) {
        category = 0;
    } else if (speed <= 3) {
        category = 1;
    } else if (speed <= 27) {
        category = 2;
    } else if (speed <= 47) {
        category = 3;
    } else if (speed <= 63) {
        category = 4;
    } else {
        category = 5;
    }
    
    // 使用switch语句输出描述
    switch(category) {
        case 0:
            printf("Calm（无风）\n");
            break;
        case 1:
            printf("Light air（轻风）\n");
            break;
        case 2:
            printf("Breeze（微风）\n");
            break;
        case 3:
            printf("Gale（⼤风）\n");
            break;
        case 4:
            printf("Storm（暴风）\n");
            break;
        case 5:
            printf("Hurricane（飓风）\n");
            break;
        default:
            printf("Invalid wind speed\n");
    }
    
    return 0;
}