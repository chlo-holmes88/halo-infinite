#include <stdio.h>
#include <stdlib.h>

static int compute_registry(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 93) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", compute_registry(93, 93));
    return 0;
}
