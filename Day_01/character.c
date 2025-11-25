#include <stdio.h>
#include <unistd.h>
#include <string.h>
void print_char(void) {
    char charactere = 'b';
    write(1, &charactere, 1);
}

int main() {
    print_char();
    return 0;
}   