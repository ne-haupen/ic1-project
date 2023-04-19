#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>



void main() {
    unsigned int generated = rand();
    int tries = 3;
    unsigned int key, mix;
    while(tries != 0) {
        printf("provide correct key to get to third level. Tries left: %d\n", tries);
        puts("key:");
        scanf("%u", &key);
        
        mix = generated;

        for(int i = 0; i < 0xd; i++) {
            mix = (mix + 0xffe) ^ key;
        }


        //printf("mix is %x\n", mix);
        if( mix == 0xdeadbeef ){
            puts("continuing to level three");
            return;
        }
        puts("wrong key");
        tries--;
    }

    exit(-1);
}