#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "util.h"



void level_two() {
    unsigned int generated = rand();
    int tries = 3;
    print_file_contents("banners/level_two_banner.txt");
    print_source("level_two.c");

    unsigned int key;

    while(tries != 0) {
        printf("provide correct key to get to third level. Tries left: %d\n", tries);
        puts("key:");
        scanf("%d", &key);
        if( (key ^ generated) == 0xdeadbeef ){
            puts("continuing to level three");
            return;
        }
        tries--;
    }

    exit(-1);
}