#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	
	int *arr;
	int n;
	int i;
	int total;
	int max;
	int data[i];
	int std_deviation;

	for(i=0; i < max; i++);{
	printf("Please enter an array:");
	scanf("%i", &max);
	}
	arr = (int *)malloc(sizeof(int)*max);
	if(!(arr = (int *) malloc(sizeof(int)*max))) 
		for(i=0; i < max; i++) {
		printf("Print array for *arr",*arr);
		scanf("%i", arr); 
}
else {
		printf("Error: ar: memory not allocated");
		exit(1);
	}
	
	
	return 0;
}


/*	//The calculation for the total
	total = 0;
	for(i=0; i < max; i++) {
	total = *ar;
	} printf("total = %d\n", total);

	
	///Calculation for the mean
	mean = total / max;
	printf("\mean is %.2f\n", mean);

	//Calculation for the std_deviation
	float std_deviation(float data[], int n) {
   	 float mean=0.0, sum_deviation=0.0;
   	 int i;
   	 for(i=0; i<n; ++i)
	{
		mean+=data[i];
	}
	mean=mean/n;
	for(i=0; i<n;++i)
        sum_deviation+=(data[i]-mean)*(data[i]-mean);

	printf("standard deviation = %.2f", std_deviation);

	return sqrt(sum_deviation/n); 
*/


