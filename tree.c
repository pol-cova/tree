//
// Created by Paul Contreras on 13/02/23.
//
/*
 * This simple library in this header file, detect which use you use and return an integer according to your system.
 */

/*
 * I design an int code for detect any OS, the following list are the codes:
 * [2] -> Windows OS
 * [3] -> Linux OS
 * [4] -> MacOS
 */
#include <stdio.h>

int os_type;

#ifndef TREE_DOS_H
#define TREE_DOS_H

int dos()
{
#ifdef _WIN32
    os_type = 2;
    return os_type;
#elif __linux__
    os_type = 3;
    return os_type;
#elif __APPLE__
    os_type = 4;
    return os_type;
#else
    printf("Unidentified OS\n");
#endif
    return 0;
}

#endif //TREE_DOS_H

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


#ifndef TREE_CTREE_H
#define TREE_CTREE_H

#include <stdio.h>
#define MAX_LEN 128

void print_image(FILE *fptr);

int banner(void)
{
    char *filename = "ascii-art.txt";
    FILE *fptr;

    fptr = fopen("/Users/paulcontreras/CLionProjects/tree/resources/banner_header.txt", "r");


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

    fptr = fopen("/Users/paulcontreras/CLionProjects/tree/resources/ascii-art.txt", "r");


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

    fptr = fopen("/Users/paulcontreras/CLionProjects/tree/resources/tree1.ansi.txt", "r");


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

/*
 * CREATED BY PAUL CONTRERAS 2023
 * This code can run on any pc device
 */

// These are standard libraries needed for handling input and outputs, also for execute system commands.
#include <stdio.h>
#include <stdlib.h>

// These are libraries coded by me for optimize the project

/*
 * tree.h this library include the standard tree, divided in two parts crown(the triangle) are trunk(the square).
 * dos.h this library include prebuilt function to detect the user operative system and return a specific value.
 * dst.h this library include an option for create many tree combinations with standard symbols
 * unitree.h this library include a special version of a tree with a unicode standard.
 * the function exit(0), kill the execution of this program
 */

// Main function all program are inside it
int main() {

    // Variables for designed tree function
    char userOptPer, userOptUni;
    char userSelCrown, userSelTrunk;
    // variable for assigned an int based in the operative system
    int os_detected;
    /* This variable initialize the function dos() this function detect which is your operative system and return a specific
     * number so the variable get the value.
    */
    os_detected = dos();

    // Display the main message in user command-prompt
    printf("This is my tree\n");


    /*
     * This switch is based in the value of os_detected variable, because according to a value it's the
     * operative system so deploy a specific version with specific commands.
     */
    switch (os_detected) {
        case 2:
            /*
             * If the variable is 2, the operative system is windows so this version uses commands of windows
             */

            // These are standard messages
            printf("Windows version :) \n");
            printf("Tree developed by Paul Contreras \n");
            printf("tree.h v1.0.0\n");
            // This function is from tree.h that include the standard tree with * and #
            tree();
            printf("\n");
            // This function is from tree.h that include the unicode tree with standard emojis
            windows_tree_version();
            system("pause");
            /*
             * Here the program ask if the user want to create a new standard version if the answer is y, the
             * program display a new function inside dst.h
             */
            printf("Do you wanna to create a own tree version  \U0001f384? y/n: ");
            scanf("%c", &userOptPer);
            printf("You selected : %c \n", userOptPer);
            system("cls");
            if (userOptPer == 'y'){
                /*
                 * Here are the version for ask user parameters to design a new tree
                 */
                printf("CREATE TREE [BETA]\n");
                // This function inside dst.h display the possible combinations an options to user can choose
                display_option_menu();
                // This scan's request a values for generate a new tree
                printf("Select an option for the crown: ");
                scanf(" %c", &userSelCrown);
                printf("Select an option for the trunk: ");
                scanf(" %c", &userSelTrunk);
                system("cls");
                /*
                 * Here the program return the new design of by a tree
                 */
                printf("FINAL RESULT\n");
                /*
                 * The function design tree need to parameters userSelCrown that is the user
                 * selection of the symbols for the triangle, and userSelTrunk that is the user selection
                 * for the rectangle
                 */
                designTree(userSelCrown,userSelTrunk);

                // In this part the program ask user to see the final tree that is in unitree.h
                printf("Hey you want to try an epic version...? y/n: ");
                scanf(" %c", &userOptUni);
                printf("You selected : %c \n", userOptUni);
                system("cls");
                /*
                 * If the user answer is y the program return an epic tree with a message, else only return the message
                 */
                if (userOptUni == 'y'){
                    /* uni_epic_tree is a function inside unitree.h that return a tree with unicode emojis, so
                     * it's more epic that a simple symbol
                    */
                    uni_epic_tree();
                    printf("Thanks for using this software! :)\n");
                    printf("GITHUB : github/pol-cova");
                } else if (userOptUni == 'n'){
                    printf("Thanks for using this software! :)\n");
                    printf("GITHUB : github/pol-cova");
                    exit(0);
                }
            } else if (userOptPer == 'n'){
                printf("Thanks for using this software! :)\n");
                printf("GITHUB : github/pol-cova");
                exit(0);
            }

            break;
        case 3:
            /*
             * If the variable is 3, the operative system is linux so this version uses commands of windows
             */

            // These are standard messages
            printf("Linux version :0 \n");
            printf("Tree developed by Paul Contreras \n");
            printf("tree.h v1.0.0\n");
            // This function is from tree.h that include the standard tree with * and #
            tree();
            printf("\n");
            // This function is from tree.h that include the unicode tree with standard emojis
            epicTree();
            printf("Press any key to continue...");
            getchar();
            /*
             * Here the program ask if the user want to create a new standard version if the answer is y, the
             * program display a new function inside dst.h
             */
            printf("Do you wanna to create a own tree version  \U0001f384? y/n: ");
            scanf("%c", &userOptPer);
            printf("You selected : %c \n", userOptPer);
            system("clear");
            if (userOptPer == 'y'){
                /*
                 * Here are the version for ask user parameters to design a new tree
                 */
                printf("CREATE TREE [BETA]\n");
                // This function inside dst.h display the possible combinations an options to user can choose
                display_option_menu();
                // This scan's request a values for generate a new tree
                printf("Select an option for the crown: ");
                scanf(" %c", &userSelCrown);
                printf("Select an option for the trunk: ");
                scanf(" %c", &userSelTrunk);
                system("clear");
                printf("FINAL RESULT\n");
                /*
                 * The function design tree need to parameters userSelCrown that is the user
                 * selection of the symbols for the triangle, and userSelTrunk that is the user selection
                 * for the rectangle
                 */
                designTree(userSelCrown,userSelTrunk);

                // In this part the program ask user to see the final tree that is in unitree.h
                printf("Hey you want to try an epic version...? y/n: ");
                scanf(" %c", &userOptUni);
                printf("You selected : %c \n", userOptUni);
                system("clear");
                /*
                 * If the user answer is y the program return an epic tree with a message, else only return the message
                 */
                if (userOptUni == 'y'){
                    /* uni_epic_tree is a function inside unitree.h that return a tree with unicode emojis, so
                     * it's more epic that a simple symbol
                    */
                    uni_epic_tree();
                    printf("Thanks for using this software! :)\n");
                    printf("GITHUB : github/pol-cova");
                } else if (userOptUni == 'n'){
                    printf("Thanks for using this software! :)\n");
                    printf("GITHUB : github/pol-cova");
                    exit(0);
                }
            } else if (userOptPer == 'n'){
                printf("Thanks for using this software! :)\n");
                printf("GITHUB : github/pol-cova");
                exit(0);
            }
            break;
        case 4:
            /*
             * If the variable is 4, the operative system is MacOsX so this version uses commands of windows
             */

            // These are standard messages
            banner();
            printf("MacOsX version ( ͡° ͜ʖ ͡°)\n");
            printf("Tree developed by Paul Contreras \n");
            printf("tree.h v1.0.0\n");
            tree();
            printf("\n");
            epicTree();
            printf("Press any key to continue...");
            getchar();
            printf("Really do you think that last tree it's mine?...¯\\_(ツ)_/¯ \n");
            printf("hahahah\n");
            ftree();
            printf("Epic no....?\n");
            /*
             * Here the program ask if the user want to create a new standard version if the answer is y, the
             * program display a new function inside dst.h
             */
            printf("Do you wanna to create your own tree version  \U0001f384? y/n: ");
            scanf("%c", &userOptPer);
            printf("You selected : %c \n", userOptPer);
            system("clear");
            if (userOptPer == 'y'){
                /*
                 * Here are the version for ask user parameters to design a new tree
                 */
                printf("CREATE TREE [BETA]\n");
                // This function inside dst.h display the possible combinations an options to user can choose
                display_option_menu();
                // This scan's request a values for generate a new tree
                printf("Select an option for the crown: ");
                scanf(" %c", &userSelCrown);
                printf("Select an option for the trunk: ");
                scanf(" %c", &userSelTrunk);
                system("clear");
                printf("FINAL RESULT\n");
                /*
                 * The function design tree need to parameters userSelCrown that is the user
                 * selection of the symbols for the triangle, and userSelTrunk that is the user selection
                 * for the rectangle
                 */
                designTree(userSelCrown,userSelTrunk);
                // In this part the program ask user to see the final tree that is in unitree.h
                printf("Hey you want to try an epic version...? y/n: ");
                scanf(" %c", &userOptUni);
                printf("You selected : %c \n", userOptUni);
                system("clear");
                /*
                 * If the user answer is y the program return an epic tree with a message, else only return the message
                 */
                if (userOptUni == 'y'){
                    /* uni_epic_tree is a function inside unitree.h that return a tree with unicode emojis, so
                     * it's more epic that a simple symbol
                    */
                    atree();
                    printf("Thanks for using this software! :)\n");
                    printf("GITHUB : github/pol-cova");
                } else if (userOptUni == 'n'){
                    atree();
                    printf("Thanks for using this software! :)\n");
                    printf("GITHUB : github/pol-cova");
                    exit(0);
                }

            } else if (userOptPer == 'n'){
                atree();
                printf("Thanks for using this software! :)\n");
                printf("GITHUB : github/pol-cova");
                exit(0);
            }
            break;
    }

    return 0;
}
