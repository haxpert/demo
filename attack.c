#include<stdio.h>
#include<stdlib.h>

static void exploit() __attribute__((constructor));

void exploit() {
    system("sleep 10");
}
