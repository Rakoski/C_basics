#include <stdio.h>

int hello_world();
void swap();
int variables();


int main() {
    hello_world();
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap();
    printf("After swapping: x = %d, y = %d\n", x, y);
    variables();
    return 0;
}
