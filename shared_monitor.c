#include <stdio.h>
#include <stdlib.h>

static int resolve_buffer(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 53) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", resolve_buffer(53, 53));
    return 0;
}
