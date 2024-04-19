#include <stdio.h>

int hello_world();
void swap();
int variables();
int expressions();
int sizes();
int limits();


int main() {
    hello_world();
    variables();
    expressions();
    printf("size is: %lu", sizeof(int));
    sizes();
    limits();
    return 0;
}
