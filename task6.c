
#include <stdio.h>

void showBoard(char board[]) {
    printf("\n %c | %c | %c\n", board[0], board[1], board[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[3], board[4], board[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n\n", board[6], board[7], board[8]);
}

int hasWon(char board[], char player) {
    return
        (board[0] == player && board[1] == player && board[2] == player) ||
        (board[3] == player && board[4] == player && board[5] == player) ||
        (board[6] == player && board[7] == player && board[8] == player) ||
        (board[0] == player && board[3] == player && board[6] == player) ||
        (board[1] == player && board[4] == player && board[7] == player) ||
        (board[2] == player && board[5] == player && board[8] == player) ||
        (board[0] == player && board[4] == player && board[8] == player) ||
        (board[2] == player && board[4] == player && board[6] == player);
}

int main() {
    char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char player = 'X';
    int choice;

    for (int turn = 0; turn < 9; ) {
        showBoard(board);

        printf("Player %c, choose a spot (1-9): ", player);

        if (scanf("%d", &choice) != 1) {
            printf("Please enter a valid number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);

            continue;
        }

        if (choice < 1 || choice > 9 ||
            board[choice - 1] == 'X' ||
            board[choice - 1] == 'O') {

            printf("That spot is not available. Try again.\n");
            continue;
        }

        board[choice - 1] = player;
        turn++;

        if (hasWon(board, player)) {
            showBoard(board);
            printf("Player %c wins!\n", player);
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    showBoard(board);
    printf("It's a draw!\n");

    return 0;
}
