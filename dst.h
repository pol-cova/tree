//
// Created by Paul Contreras on 07/02/23.
//
/*
 * This library is for users can design a new tree.
 */
#ifndef TREE_DST_H
#define TREE_DST_H

#include <stdio.h>
#include <stdlib.h>

/*
 * First I include some standard libraries, and create a few void functions that will call it from the main.c
 */


// This function contains the options that user can choose to generate a new tree
void display_option_menu()
{
    printf("MENU \n");
    printf("----------------\n");
    printf("Personalization options: \n");
    printf("---CROWN--- \n");
    printf("[STANDARD OPTIONS] \n");
    printf("a - * \n");
    printf("b - o \n");
    printf("c - x \n");
    printf("d - $ \n");
    printf("e - ^ \n");
    printf("---TRUNK---");
    printf("[STANDARD OPTIONS] \n");
    printf("x - # \n");
    printf("y - $ \n");
    printf("z - T \n");
    printf("w - | \n");
    printf("---------------------\n");
}

/*
 * This function is to generate the triangle so, inside the main for are to for more for print the new character
 * the first for print determine the maximum of prints does the program, the second for print the blank spaces
 * this bs are needed  to get the form of a triangle, the third for it's for print the new symbols.
 */
void makeCrown(char ucrown)
{
    int x,y,z,n,m;
    n = 5;
    m = n;

    for (x=1; x<= n; x++){
        for(y=1; y <= m-1; y++){
            printf("  ");
        }
        for (z=1; z <=2*x-1; z++){
            printf(" %c",ucrown);
        }
        m--;
        printf("\n");
    }
}

/*
 * This function is for generate the rectangle, but really is a square hahaha, are a main for that works like a jumper,
 * and 2 for's inside it, the first for is used to center the trunk and the second it's for print the symbol.
 */
void makeTrunk(char utrunk)
{
    int i,j;
    for (i=0; i < 3; i++){
        for (j=0; j<3; j++){
            printf("  ");
        }
        for (j =1 ; j<=3; j++){
            printf(" %c", utrunk);
        }
        printf("\n");
    }
}

/*
 * This function handling the user parameters and according to user chose assigned a value from crown and trunk variable
 * this value it that will print by the program.
 */

void designTree(char optCrown, char optTrunk)
{
    char crownValue = '*';


    switch (optCrown) {
        case 'a':
            crownValue = '*';
            break;
        case 'b':
            crownValue = 'o';
            break;
        case 'c':
            crownValue = 'x';
            break;
        case 'd':
            crownValue = '$';
            break;
        case 'e':
            crownValue = '^';
            break;
    }

    char trunkValue = '#';

    switch (optTrunk) {
        case 'x':
            trunkValue = '#';
            break;
        case 'y':
            trunkValue = '$';
            break;
        case 'z':
            trunkValue = 'T';
            break;
        case 'w':
            trunkValue = '|';
            break;
    }

    /*
     * This part is for generate the tree, with a user selection triangle, and user selection trunk.
     */

    makeCrown(crownValue);
    makeTrunk(trunkValue);
}
#endif //TREE_DST_H
