#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "util.h"



void level_two() {
    unsigned int generated = rand();
    int tries = 3;
    unsigned int key, mix;
    print_file_contents("banners/level_two_banner.txt");
    print_source("level_two.c");

    while(tries != 0) {
        printf("provide correct key to get to third level. Tries left: %d\n", tries);
        puts("key:");
        scanf("%d", &key);
        
        mix = generated;

        for(int i = 0; i < 0xd; i++) {
            mix = (mix + 0xffe) ^ key;
        }


        printf("mix is %x\n", mix);
        if( mix == 0xdeadbeef ){
            puts("continuing to level three");
            return;
        }
        puts("wrong key");
        tries--;
    }

    exit(-1);
}