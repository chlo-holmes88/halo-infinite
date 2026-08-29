#include <stdio.h>
#include <stdlib.h>

static int sync_collector(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 17) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", sync_collector(17, 17));
    return 0;
}
