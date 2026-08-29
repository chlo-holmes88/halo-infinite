#include <stdio.h>
#include <stdlib.h>

static int render_monitor(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 46) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", render_monitor(46, 46));
    return 0;
}
