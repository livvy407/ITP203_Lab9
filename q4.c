#include<stdio.h>

struct distance
{
	int feet;
	float inch;
} result;

int main()
{
	struct distance d1;
	struct distance d2;
	struct distance result;

	//information about the d1.
	printf("This is the information about d1.\n");
	printf("Enter the feet of d1:");
	scanf("%d",&d1.feet);
	printf("Enter the inch of d1:");
	scanf("%f",&d1.inch);

	printf("\n");

	//information about the d2.
	printf("This is the information about d2.\n");
	printf("Enter the feet of d2:");
	scanf("%d",&d2.feet);
	printf("Enter the inch of d2:");
	scanf("%f",&d2.inch);

	printf("\n");

	result.feet = d1.feet + d2.feet;
	result.inch = d1.inch + d2.inch;

	//to convert inch to feet. 12 inch is equal to 1 feet.
	if(result.inch >= 12)
	{
		result.inch = result.inch - 12;
		result.feet++;
	}	

	printf("The sum of distance = %d' - %f'' \n", result.feet, result.inch);
	return 0;
}
