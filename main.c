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
#include "tree.h"
#include "dos.h"
#include "dst.h"
#include "unitree.h"

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
            printf("MacOsX version <3\n");
            printf("Tree developed by Paul Contreras \n");
            printf("tree.h v1.0.0\n");
            tree();
            printf("\n");
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
    }

    return 0;
}
