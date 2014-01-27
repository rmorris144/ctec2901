#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    
	int max;
    float total, totalsq, mean, deviation, sumsqr;
	int i;
	//int n;
	int *arr;
    total = totalsq = 0;
    
	//float value, average, variance, stddeviation, deviation, sumsqr, sum;
	
	
	//Promt user to enter max number of array values 
	printf("Please enter elements of an array: ");
	scanf("%i", &max); //Read in the value for the code
	
	//Allocate memory for to the max size of array 
	arr = (int *)malloc(max *(sizeof(int)));
	if(arr = (int *)malloc(max *(sizeof(int))))
		for(i=0; i < max; i++){ //loop for arrays 
			printf("Please enter the value of the array:");
			scanf("%i", arr);//Read in the arrays 
			total += *arr; //calculate the total
			totalsq += *arr * *arr; //for calculating the variance
			
			deviation = value[total] - mean;
			sumsqr += deviation * deviation;
			printf("Standard deviation = %.2f\n", deviation);
			
			
		}
		else {
			printf("Memory not allocated\n"); //exits if memory not allocated
			exit(1);
		}
				//Print the total 
		printf("Total = %f\n", total);
		
		///Calculation for the mean
		mean = total / max;
		printf("mean is %.2f\n", mean);
	
	
    
  /*  var = (totalsq / max) - (mean *mean);
    printf("Variance = %f\n", var);*/
    
	//Compute variance and standard deviation
	/*
	for (i = 0; i <= n; i++)
	{
		deviation = value[total] - mean;
		sumsqr += deviation * deviation;
	}
		printf("Standard deviation = %.2f\n", stddeviation);
		*/
		return 0;
	
}

