#include <stdio.h>
#include <stdlib.h>

int  x_isdigit(char x);

int main() {
    
    char ch;

    while (1) {
        ch = getchar();
        if (!x_isdigit(ch)) {
            putchar(ch);
        }
    }
    
    return 0;
}

int x_isdigit(char ch) {
    return (ch >= '0' && ch <= '9');
}