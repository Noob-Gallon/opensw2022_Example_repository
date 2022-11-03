#include <stdio.h>
#include "myfuncs.h"

int main(void) {
    // call two functions 3 times.
    for (int i = 0; i < 3; i++) {

        foo();
        goo();
    }

    // call zoo three times.
    for (int i = 0; i < 3; i++) {

        zoo();
    }

    return 0;
}
