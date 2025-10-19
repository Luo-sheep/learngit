/* 保存为 bool_c99.c */
#include <stdio.h>
#include <stdbool.h>   /* 提供 bool、true、false */

bool is_positive(int x)
{
    return (x > 0);    /* 直接返回布尔值 */
}

int main(void)
{
    int num;
    printf("请输入一个整数：");
    if (scanf("%d", &num) != 1) return 0;

    /* C99 支持 %d 打印 bool，因为 bool 本质是 1 或 0 */
    printf("结果：%s\n", is_positive(num) ? "true" : "false");

    return 0;
}