#include <stdio.h>

void swap(char *x, char *y) {
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}

int less_eq(char x, char y) {
    if (x <= y) {
        return 1;
    } else {
        return 0;
    }
}

int greater_eq(char x, char y) {
    if (x >= y) {
        return 1;
    } else {
        return 0;
    }
}

int stringLength(const char *string) {
    const char *count = string;

    while (*count)
        ++count;

    return count - string;
}

void bubblesort(char *s, int N, int (*rel)(char, char)) {
    int i,j;
    
    for (i=N-1; i>0; i--) {
        for (j=0; j<i; j++) {
            if (!rel(s[j],s[j+1])) {
                swap(&s[j], &s[j+1]);
            }
        }
    }
}

int main(void) {
    char text[] = "ACDEFB";
    
    printf("%s\n", text);
    bubblesort(text, stringLength(text), less_eq);
    printf("%s\n", text);
    bubblesort(text, stringLength(text), greater_eq);
    printf("%s\n", text);

    return 0;
} 