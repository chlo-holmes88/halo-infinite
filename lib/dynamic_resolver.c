#include <stdio.h>
#include <stdlib.h>

static int sync_processor(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 56) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", sync_processor(56, 56));
    return 0;
}
