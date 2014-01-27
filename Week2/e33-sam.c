#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}

int less_eq(char x, char y) {
    return x >= y ? 1 : 0;
}

int greater_eq(char x, char y) {
    return x <= y ? 1 : 0;
}

void bubblesort(char *s, int N, int (*rel)(char, char)) {
    int i, j;
    
    for (i=N-1; i>0; i--) {
        for (j=0; j<i; j++) {
            if (!rel(s[j],s[j+1])) {
                swap(&s[j], &s[j+1]);
            }
        }
    }
}

int main(void) {
    char text[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    
    printf("Orignial: \'%s\'\n", text);
    bubblesort(text, strlen(text), less_eq);
    printf("Ascending order:  \'%s\'\n", text);
    bubblesort(text, strlen(text), greater_eq);
    printf("Descending order: \'%s\'\n", text);

    return 0;
}