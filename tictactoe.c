#include <stdio.h>

char board[3][3];

void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin(char player) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return 1;
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return 1;

    return 0;
}

int boardFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

void playerMove(char player) {
    int row, col;
    while (1) {
        printf("Player %c, enter row and column (1-3, space separated): ", player);
        scanf("%d %d", &row, &col);
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row-1][col-1] == ' ') {
            board[row-1][col-1] = player;
            break;
        }
        else {
            printf("Invalid move, try again.\n");
        }
    }
}

int main() {
    char player = 'X';
    initializeBoard();

    while (1) {
        printBoard();
        playerMove(player);

        if (checkWin(player)) {
            printBoard();
            printf("Player %c wins!\n", player);
            break;
        }
        if (boardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }
    return 0;
}

