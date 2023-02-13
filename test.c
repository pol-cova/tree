//
// Created by Paul Contreras on 12/02/23.
//
#include <stdio.h>
#define MAX_LEN 128

void print_image(FILE *fptr);

int main(void)
{
    char *filename = "ascii-art.txt";
    FILE *fptr;

    fptr = fopen("/Users/paulcontreras/CLionProjects/tree/ascii-art.txt", "r");


    if( fptr == NULL)
    {
        fprintf(stderr,"error opening %s\n",filename);
        return 1;
    }

    print_image(fptr);
    fclose(fptr);
    return 0;
}

void print_image(FILE *fptr)
{
    char read_string[MAX_LEN];

    while(fgets(read_string,sizeof(read_string),fptr) != NULL)
        printf("%s",read_string);

}