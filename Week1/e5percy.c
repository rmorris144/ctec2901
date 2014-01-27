#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,j;
  int *arr;
  int k = 1;
  
  printf("Enter Max Number Of N : ");
  scanf("%i", &n);
  
  arr = (int *)malloc(n *sizeof(int));
  if(arr = (int *)malloc(n *sizeof(int)));
  {
  for(i = 2; i < n; i++)
    arr[i]=1;
  
  for(i = 2; i < n; i++)
    if(arr[i])
      for(j-i;i*j<n;j++)
	arr[i*j]=0;
      
  for(i=2;i< n ;i++)
    if(arr[i])
      printf("%d\n", i);
  }
  
  return 0;
    
}