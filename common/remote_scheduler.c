#include <stdio.h>
#include <stdlib.h>

static int resolve_resolver(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 95) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", resolve_resolver(95, 95));
    return 0;
}
