//
// Created by Paul Contreras on 02/02/23.
//
#ifndef TREE_TREE_H
#define TREE_TREE_H

/*
 * This library is for show my tree.
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * First I include some standard libraries, and create a few void functions that will call it from the main.c
 */

/*
 * This function is to generate the triangle so, inside the main for are to for more for print the new character
 * the first for print determine the maximum of prints does the program, the second for print the blank spaces
 * this bs are needed  to get the form of a triangle, the third for it's for print the new symbols.
 */
void crown()
{
    int x,y,z,n,m;
    n = 5;
    m = n;

    for (x=1; x<= n; x++){
        for(y=1; y <= m-1; y++){
            printf(" ");
        }
        for (z=1; z <=2*x-1; z++){
            printf("*");
        }
        m--;
        printf("\n");
    }
}

/*
 * This function is for generate the rectangle, but really is a square hahaha, are a main for that works like a jumper,
 * and 2 for's inside it, the first for is used to center the trunk and the second it's for print the symbol.
 */

void trunk()
{
    int i,j;
    for (i=0; i < 3; i++){
        for (j=0; j<3; j++){
            printf(" ");
        }
        for (j =1 ; j<=3; j++){
            printf("#");
        }
        printf("\n");
    }
}

/*
 * This function make a tree, first call the crown function that it's the first part of the tree, and secondly call the
 * trunk.
 */
void tree()
{
    crown();
    trunk();
}

void epicTree()
{
    /*
 * This function is to generate the triangle so, inside the main for are to for more for print the new character
 * the first for print determine the maximum of prints does the program, the second for print the blank spaces
 * this bs are needed  to get the form of a triangle, the third for it's for print the unicode symbols.
 */
    int x,y,z,n,m;
    n = 5;
    m = n;

    for (x=1; x<= n; x++){
        for(y=1; y <= m-1; y++){
            printf("  ");
        }
        for (z=1; z <=2*x-1; z++){
            printf("\U0001f7e2");
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
            printf("\U0001f7eb");
        }
        printf("\n");
    }

}


void windows_tree_version()
{
    /*
 * This function is to generate the triangle so, inside the main for are to for more for print the new character
 * the first for print determine the maximum of prints does the program, the second for print the blank spaces
 * this bs are needed  to get the form of a triangle, the third for it's for print the unicode symbols.
 */
    int x,y,z,n,m;
    n = 5;
    m = n;

    for (x=1; x<= n; x++){
        for(y=1; y <= m-1; y++){
            printf("  ");
        }
        for (z=1; z <=2*x-1; z++){
            printf("%c", 9);
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
            printf("%c", 10);
        }
        printf("\n");
    }
}
#endif //TREE_TREE_H
