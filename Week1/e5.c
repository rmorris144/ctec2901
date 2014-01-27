#include <stdio.h>

int main()
{
	int n, i = 3, count, c; //Initialising variables
	
	printf("Enter the number of prime numbers required\n"); //Print statement
	scanf("%d", &n);	//The user reads in prime number
	
	if ( n >= 1 )	//If statement to test the prime numbers
	{
		printf("First %d prime number are :\n", n);
		printf("2\n");
	}
	
	for ( count = 2; count <= n; ) //for statement to test count
	{
		for ( c = 2; c <= i - 1; c++ ) //for statement to test c is equal to 2
			{
				if (i%c == 0)
					break;
			}
			if ( c == i )
			{
				printf("%d\n",i);
				count++;
			}
			i++;
		}
		
		return 0;
	}