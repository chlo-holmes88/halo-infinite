#include <stdio.h>
#include <stdlib.h>

static int handle_buffer(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 17) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", handle_buffer(17, 17));
    return 0;
}
