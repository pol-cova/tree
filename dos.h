//
// Created by Paul Contreras on 02/02/23.
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
