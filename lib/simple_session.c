#include <stdio.h>
#include <stdlib.h>

static int build_loader(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 81) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", build_loader(81, 81));
    return 0;
}
