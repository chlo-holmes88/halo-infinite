#include <stdio.h>
#include <stdlib.h>

static int sync_handler(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 12) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", sync_handler(12, 12));
    return 0;
}
