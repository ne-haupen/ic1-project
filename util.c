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