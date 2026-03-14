#include <stdio.h>
#include <stdlib.h>

#define WIDTH 40
#define HEIGHT 10

struct Ball {
    int x, y;
    int dx, dy;
};

struct Paddle {
    int y;
};

void draw(struct Ball ball, struct Paddle p1, struct Paddle p2) {

    system("clear");

    for(int i = 0; i < HEIGHT; i++) {

        for(int j = 0; j < WIDTH; j++) {

            if(j == ball.x && i == ball.y)
                printf("O");   

            else if(j == 0 && i == p1.y)
                printf("|");   

            else if(j == WIDTH-1 && i == p2.y)
                printf("|");

            else
                printf(" ");
        }

        printf("\n");
    }
}

int main() {

    struct Ball ball = {WIDTH/2, HEIGHT/2, 1, 1};

    struct Paddle p1 = {HEIGHT/2};
    struct Paddle p2 = {HEIGHT/2};

    char input;

    while(1) {

        draw(ball, p1, p2);

        printf("Player1 w/s , Player2 o/l : ");
        scanf(" %c", &input);

        if(input == 'w') p1.y--;
        if(input == 's') p1.y++;

        if(input == 'o') p2.y--;
        if(input == 'l') p2.y++;

        ball.x += ball.dx;
        ball.y += ball.dy;

        if(ball.y == 0 || ball.y == HEIGHT-1)
            ball.dy = -ball.dy;

        if(ball.x == 1 && ball.y == p1.y)
            ball.dx = -ball.dx;

        if(ball.x == WIDTH-2 && ball.y == p2.y)
            ball.dx = -ball.dx;

        if(ball.x <= 0 || ball.x >= WIDTH-1) {
            printf("Game Over\n");
            break;
        }
    }

    return 0;
}
