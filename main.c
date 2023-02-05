#include <stdio.h>
#include "tree.h"
#include "dos.h"
#include <stdlib.h>

int main() {
    printf("This is my tree\n");
    int os_detected;
    os_detected = dos();

    switch (os_detected) {
        case 2:
            printf("Windows version :)\n");
            tree();
            system("pause");
        case 3:
            printf("Linux version :)");
            tree();
            getchar();
        case 4:
            printf("MacOsX version :)\n");
            tree();
            printf("Press any key to exit...");
            getchar();
    }
    
    return 0;
}
