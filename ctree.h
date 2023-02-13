//
// Created by Paul Contreras on 13/02/23.
//

/*
 * This library is for print ascii art in cmd and terminal, so this code, read arte from .txt source
 * and print in your command prompt
 */
#ifndef TREE_CTREE_H
#define TREE_CTREE_H

#include <stdio.h>
#define MAX_LEN 128

void print_image(FILE *fptr);

int banner(void)
{
    char *filename = "ascii-art.txt";
    FILE *fptr;

    fptr = fopen("C:/Users/compa/OneDrive/Escritorio/tree 4/tree/resources/banner_header.txt", "r");


    if( fptr == NULL)
    {
        fprintf(stderr,"error opening %s\n",filename);
        return 1;
    }

    print_image(fptr);
    fclose(fptr);
    return 0;
}




int ftree(void)
{
    char *filename = "ascii-art.txt";
    FILE *fptr;

    fptr = fopen("C:/Users/compa/OneDrive/Escritorio/tree 4/tree/resources/ascii-art.txt", "r");


    if( fptr == NULL)
    {
        fprintf(stderr,"error opening %s\n",filename);
        return 1;
    }

    print_image(fptr);
    fclose(fptr);
    return 0;
}

int atree(void)
{
    char *filename = "ascii-art.txt";
    FILE *fptr;

    fptr = fopen("C:/Users/compa/OneDrive/Escritorio/tree 4/tree/resources/wtree.ansi.txt", "r");


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



#endif //TREE_CTREE_H
