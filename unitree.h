//
// Created by Paul Contreras on 08/02/23.
//

#ifndef TREE_UNITREE_H
#define TREE_UNITREE_H

/*
 * This library is for show an epic tree.
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * First I include some standard libraries, and create a few void functions that will call it from the main.c
 */


void uni_epic_tree()
{
    /*
 * This function is to generate the triangle so, inside the main for are to for more for print the new character
 * the first for print determine the maximum of prints does the program, the second for print the blank spaces
 * this bs are needed  to get the form of a triangle, the third for it's for print the new symbols.
 */
    int x,y,z,n,m;
    n = 5;
    m = n;

    for (x=1; x<= n; x++){
        for(y=1; y <= m-1; y++){
            printf("  ");
        }
        for (z=1; z <=2*x-1; z++){
            printf("\U0001f384");
        }
        m--;
        printf("\n");
    }
    /*
 * This function is for generate the rectangle, but really is a square hahaha, are a main for that works like a jumper,
 * and 2 for's inside it, the first for is used to center the trunk and the second it's for print the symbol.
 */

    int i,j;
    for (i=0; i < 3; i++){
        for (j=0; j<3; j++){
            printf("  ");
        }
        for (j =1 ; j<=3; j++){
            printf("\U0001f384");
        }
        printf("\n");
    }
}
#endif //TREE_UNITREE_H
