//
// Created by mateus on 18/04/24.
//

#include <stdio.h>

int sizes() {
    for (int a = 0; a < 10; a++) {
        printf("value of a: %d\n", a);
    }
    unsigned int b = 0;
    printf("value of b before b - 5: 0\n");
    b = b - 5;
    printf("value of b - 5: %u\n", b);
    return 0;
}
