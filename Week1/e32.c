#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mean(int *ar) {
	return 0;
}

int main (void)
{
	
	int *ar, max, i, counter, n, x, sum;
	float std_deviation, variance, sum1, average;
	
	printf("Please enter an array:\n");
	scanf("%i", &max);

	ar = (int *)malloc(sizeof(int)*max);

	if(!(ar = (int *)malloc(sizeof(int)*max))) {
		printf("Error: ar: memory not allocated\n");
		exit(1);
	}
	else {
		for(i=0; i < max; i++) {
			*ar = 1;
		}
	}
	
	while(*ar) {
		printf("%i", ar[0]);
		*ar++;
	}

	average = sum / (float)n;
	for (i = 0; i < n; i++)
	{
		sum1 = sum1 + poq((x[i] - average), 2);
	}
	variance = sum1 / (float)n;
	std_deviation = sqrt(variance);
	printf("Average of all elements = %.2f\n", average);
	printf("variance of all elements = %.2f\n", variance);
	printf("Standard deviation = %.2f\n", std_deviation);

	return 0;
}




