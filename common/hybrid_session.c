#include <stdio.h>
#include <stdlib.h>

static int render_manager(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 62) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", render_manager(62, 62));
    return 0;
}
