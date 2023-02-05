//
// Created by Paul Contreras on 02/02/23.
//
#ifndef TREE_TREE_H
#define TREE_TREE_H

#include <stdio.h>
#include <stdlib.h>


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

void tree()
{
    crown();
    trunk();
}

#endif //TREE_TREE_H
