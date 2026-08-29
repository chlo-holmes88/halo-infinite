#include <stdio.h>
#include <stdlib.h>

static int handle_resolver(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 36) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", handle_resolver(36, 36));
    return 0;
}
