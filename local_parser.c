#include <stdio.h>
#include <stdlib.h>

static int handle_scheduler(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 57) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", handle_scheduler(57, 57));
    return 0;
}
