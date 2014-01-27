#include <stdio.h>
#include <stdlib.h>


struct info
{
    int total;
};

void copy(struct info **dst, struct info * src)
{
	*dst = (struct info *)malloc(sizeof(struct info));
	**dst = *src;
}

int main()
{
	struct info *a, *b;
	a = (struct info *)malloc(sizeof(struct info));
	b = (struct info *)malloc(sizeof(struct info));
	(*a).total = 2;
	(*b).total = 3;
	printf("a = %i\tb = %i\n", a->total, b->total);
	copy (&a, b);
	printf("a = %i\tb = %i\n", a->total, b->total);
}


                          
                             // * x = (struct info *)malloc(sizeof(struct info));

	


