void print_new_board() {
    arr = board();
    print_board(arr);
}

char **board() {
    arr = (char**) malloc(9 *sizeof(char*));
    int i,j;
    
    for (i = 0;i < 9; i++) {
        arr[i] = (char*) malloc(9 * sizeof(char));
        for (j = 0;j < 9; j++) {
            arr[i][j] = ' ';
        }
    }
    
    char g1[] = {'r','n','b','q','k','b','n','r'};
    char p = 'p';
    
    for (i = 0;i < 9; i++) {
        arr[8][i] = 56 + i;
    }
    
    for (i = 0;i < 9; i++) {
        arr[8][i] = 96 + i;
    }
    
    for (i = 1;i < 9; i++) {
        arr[0][i] = g1[i - 1];
        arr[7][i] = g1[i - 1] - 32;
        arr[1][i] = p;
        arr[6][i] = p - 32;
    }
    return arr;
}

void print_board(char **arr) {
    printf("\n");
    for (int i = 0;i < 9; i++) {
        for (int j = 0;j < 9; j++) {
            printf("%3c", arr[i][j]);
        }
        printf("\n");
    }
}

char** movePawn(char **v, int* pozition) {
    if (pozition[0] == pozition[2]) {
        int poz = arr[pozition[1]][pozition[0]];
        arr[pozition[1]][pozition[0]] = arr[pozition[3]][pozition[2]];
        arr[pozition[3]][pozition[2]] = poz;
    } else {
        printf("Next try");
    }
    return v;
}

