#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    unsigned int generated = rand();
    int tries = 3;
    if (argv[1]){       
            tries = 1; 
    }
    char key[10], mix;
    while(tries != 0) {
        //printf("provide correct key to get to third level. Tries left: %d\n", tries);
        if (argv[1]){         
            //key = argv[1];
        } else {
            puts("key:"); // 3039275914
            scanf("%s", &key);
        }
        /*
        mix = generated;

        for(int i = 0; i < 0xd; i++) {
            mix = (mix + 0xffe) ^ key;
        }
        */

        //printf("mix is %x\n", mix);
        //if( mix == 0xdeadbeef ){
        //printf("%s \n", argv[1]);
        if (strcmp(argv[1], "1025") == 0) {
            puts("continuing to level three");
            return 0;
        }
        puts("wrong key");
        tries--;
    }
    return 1;
}