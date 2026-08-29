#include <stdio.h>
#include <stdlib.h>

static int build_session(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 95) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", build_session(95, 95));
    return 0;
}
