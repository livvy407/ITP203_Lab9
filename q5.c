#include <stdio.h>

struct Complexe_num
{
	int real_num;
	int img_num;
};

int main()
{
	struct Complexe_num a, b, sum;

	printf("Enter a real number for first complexe_number: ");
	scanf("%d", &a.real_num);
	printf("Enter a imaginary number for first complexe_number: ");
	scanf("%d", &a.img_num);

	printf("Enter a real number for second complexe_number: ");
	scanf("%d", &b.real_num);
	printf("Enter a imaginary number for second complexe_number: ");
	scanf("%d", &b.img_num);

	sum.real_num = a.real_num + b.real_num;
	sum.img_num = a.img_num + b.img_num;

	printf("Sum of two complex number: (%d) + (%d)\n", sum.real_num, sum.img_num);
	return 0;
}