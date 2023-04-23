#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned int generated = rand();
    int tries = 3;
    if (argv[1]){       
            tries = 1; 
    }
    unsigned int key, mix;
    while(tries != 0) {
        //printf("provide correct key to get to third level. Tries left: %d\n", tries);
        if (argv[1]){         
            key = atoi(argv[0]);
        } else {
            puts("key:"); // 3039275914
            scanf("%u", &key);
        }
        
        mix = generated;

        for(int i = 0; i < 0xd; i++) {
            mix = (mix + 0xffe) ^ key;
        }


        //printf("mix is %x\n", mix);
        if( mix == 0xdeadbeef ){
            puts("continuing to level three");
            return 0;
        }
        //puts("wrong key");
        tries--;
    }
    return -1;
}