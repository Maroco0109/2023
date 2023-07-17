#include<stdio.h>
void removeblank(char* a, char* b) {
    for (; *a; a++) {
        if (' ' != *a) {
            *b = *a;
            b++;
        }
        else
            ;
    }
    *b = 0;
}
int main() {
    char a[] = "  ab  ";
    char b[]="             ";
    removeblank(a, b);
    printf("%s\n", b);
}