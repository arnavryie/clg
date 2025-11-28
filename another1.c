#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep()

#define WIDTH 20
#define HEIGHT 10

int main() {
    int x = WIDTH / 2, y = HEIGHT / 2;
    char move;
    while (1) {
        // Draw board
        system("clear"); // Use "cls" on Windows
        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                if (i == y && j == x)
                    printf("O"); // Snake head
                else
                    printf(".");
            }
            printf("\n");
        }
        printf("Use w/a/s/d then Enter to move (q to quit): ");
        move = getchar();
        getchar(); // consume newline

        if (move == 'q')
            break;
        if (move == 'w' && y > 0)
            y--;
        if (move == 's' && y < HEIGHT - 1)
            y++;
        if (move == 'a' && x > 0)
            x--;
        if (move == 'd' && x < WIDTH - 1)
            x++;

        usleep(150000); // 150ms delay
    }
    printf("Game Over!\n");
    return 0;
}

