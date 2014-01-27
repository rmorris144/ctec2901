#include <stdio.h>
#include "stack_int.h"

void printint(int i) { printf("'%i'",i);}

int main()
{
	stack_int * s = new_unbounded_stack_int();
	printf("\nIntially:\n");
	stack_int_print(s,&printint);
	stack_int_push(s,1);
	stack_int_push(s,2);
	stack_int_push(s,3);
	
	printf("\npush(push(push(push(empty,1),2),3)\n");
	stack_int_print(s,&printint);
	
	while(!stack_int_isempty(s)) {
		printf("\nPopped item: %i\t", stack_int_pop(s));
		stack_int_print(s,&printint);
	}
	
	printf("\n");
	stack_int_release(s);
}
