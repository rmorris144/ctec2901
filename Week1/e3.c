#include <stdio.h>
#include <stdlib.h>

struct info {
	int total;
	char *str;
};

struct info s, *p = &s;

int main () {
	s.total=10;
	s.str = "Hello World\n";

	printf("total = %i, str = %s\n", p->total, p->str);

	char *q = p->str;
	++p->total;
	++*q++;
	(++q)--;
	printf("total = %i, str = %s\n", p->total, p->str);

	return 0;
}

