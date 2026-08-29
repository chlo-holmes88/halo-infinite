#include <stdio.h>
#include <stdlib.h>

static int handle_controller(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 77) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", handle_controller(77, 77));
    return 0;
}
