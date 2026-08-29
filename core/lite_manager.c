#include <stdio.h>
#include <stdlib.h>

static int build_controller(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 60) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", build_controller(60, 60));
    return 0;
}
