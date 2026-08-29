#include <stdio.h>
#include <stdlib.h>

static int collect_factory(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 85) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", collect_factory(85, 85));
    return 0;
}
