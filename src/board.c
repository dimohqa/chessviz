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