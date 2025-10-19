/*
 * 完成人　：杨哲(2025090907010)
 * 完成时间：2025-09-22, Mon, 17:19:19
 * 系统评分：100
 */


/* upc.c
 *
 * Computes a universal product code check digit
 *
 */

#include <stdio.h>


int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total,e,s;
	
	printf("Enter the first (single) digit:");
	scanf("%1d", &d);

	printf("Enter the first group of five digits:");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

	printf("Enter the second group of five digits:");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    printf("Enter the last (single) digit:");
	scanf("%1d", &e);
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3*first_sum + second_sum;

    s=9-((total-1)%10);
    if (s==e)
	printf("VALID\n");
	else
	printf("NOT VALID\n");
	
	return 0;
}