#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Optional: For color on Windows, uncomment
// #include <windows.h>
// void setColor(int color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); }

void printBanner() {
    printf("\n");
    printf("******************************\n");
    printf("*      GUESS THE NUMBER      *\n");
    printf("******************************\n");
}

int main() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1; // random number between 1 and 100

    printBanner();
    printf("I'm thinking of a number between 1 and 100.\nCan you guess it?\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > number) {
            printf("  ^\n / \\\nToo high!\n");
        } else if (guess < number) {
            printf("  v\n / \\\nToo low!\n");
        } else {
            printf("\n\\o/ You guessed it!\n");
            printf("It took you %d tries.\n", attempts);
            printf("Thanks for playing!\n");
        }
    } while (guess != number);

    return 0;
}

