#include <stdio.h>
#include <stdlib.h>

char title[] = "CTECT2901 DATA STRUCTURES AND ALGORITHMS";

void up_case (char *c)
{
	if (*c >= 'a' && *c <= 'z') *c -= 32;
}

void lo_case (char *c)
{
	if (*c >= 'A' && *c <= 'Z') *c += 32;
}

void traverse (char *s, void (*f)(char*c))
{
	while (*s != '\0') {
		f(s);
		s++;
	}
}

void foo (char *c)
{
	*c = 'X';
}

int main ()
{
	printf("Original: \%s\\n", title);
	traverse(title, up_case);
	printf("Upper case: \%s\'\n", title);
	traverse(title, lo_case);
	printf("Lower case: \%s\'\n", title);
	traverse(title, foo); 
	printf("foo:\%s\'\n", title);
}