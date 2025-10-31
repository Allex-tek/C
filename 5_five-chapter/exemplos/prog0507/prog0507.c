#include <stdio.h>
#include <stdlib.h>

int x_toupper(char ch);

int main() {
    
    char ch;

    while (1) {
        ch = getchar();
        putchar(x_toupper(ch)); 
    }
    return 0;
}

int x_toupper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch + 'A' - 'a';
    } else {
        return ch;
    }
}