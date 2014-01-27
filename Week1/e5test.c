#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int *ar;
	int i;
	int j;
	
	printf("Enter N:");
	scanf("%i", &n);
	
	ar = (int *)malloc(n *sizeof(int));
	if(ar = (int *)malloc(n *sizeof(int)));
	
	else {
		printf("Memory not allocated\n");
		exit(1);
	}
	
    for(i=2; i<n; i++){
        ar[i] = 1;
    }
	
	for(i=2; i < n; i++) {
		if(ar[i])
		for(j-1; i*j < n; j++)
		ar[i * j] = 0;
		
		for (i=2; i < n; i++)
		if(ar[i])
		printf("%d\n", i);
	}
		
		//printf("index: %i\n", j);
		
		return 0;
		
}
