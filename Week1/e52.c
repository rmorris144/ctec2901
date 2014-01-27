#include<stdio.h>
 
int main()
{
	//Initialises the variables
   int n, i = 3, count, c;
 	//Asks user the user to enter the number of prime numbers
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);
 	//if statement
   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }
 	//for loop  
   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
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