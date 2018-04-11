#include <stdio.h>
#include <stdlib.h>
#include "board.h"

int main() {
    int k = 0;
    while ( k == 0) {
        char status;
        printf("\t(s) Start or (q) Quit\n");
        scanf("%c", &status);
        print_new_board();
            if (status == 's') {
                k = -1;
                int exit = 0;
                while (exit == 0) {
                    char arr1[4], arr2[4];
                    printf("Write coordinates or (r) to Restart:\n" );
                    scanf("%s %s", one_place, two_place);
                    if (arr1[0] == 'r') {
                        system("clear");
                        exit = 1;
                        main();
                    }
                }
            }
    }
    return 0;
}