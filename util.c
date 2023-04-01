#include <stdio.h>
#include <stdlib.h> // For exit()

void print_file_contents(char* filename) {
    FILE *fptr;

    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file: %s\n", filename);
        exit(0);
    }
  
    // Read contents from file
    char c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }
  
    fclose(fptr);
}

void print_source(char* filename) {
    int user_answer;
    puts("Do you want to print the source code?");
    puts("1) yes");

    scanf("%d", &user_answer);
    if(user_answer == 1) {
        print_file_contents(filename);
    }
}