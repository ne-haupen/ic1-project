#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int tries = 3;
    if (argv[1]){       
            tries = 1; 
    }
    int key;
    while(tries != 0) {
        //printf("provide correct key to get to third level. Tries left: %d\n", tries);
        if (argv[1]){         
            key = atoi(argv[1]);
        } else {
            puts("key:");
            scanf("%u", &key);
        }


        printf("key is %d\n", key);
        if( key == 9641){
            puts("continuing to level three");
            return 0;
        }
        puts("wrong key");
        tries--;
    }
    return 1;
}
