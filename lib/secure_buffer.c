#include <stdio.h>
#include <stdlib.h>

static int sync_loader(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 55) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", sync_loader(55, 55));
    return 0;
}
