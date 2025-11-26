#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to determine winner
int checkWinner(char player, char computer) {
    if (player == computer)
        return 0; // draw
    
    if ((player == 's' && computer == 'w') ||
        (player == 'w' && computer == 'g') ||
        (player == 'g' && computer == 's'))
        return 1; // player wins
    
    return -1; // computer wins
}

int main() {
    char player, computer;
    int result;

    srand(time(0)); // random seed
    
    printf("------ Snake Water Gun Game ------\n");
    printf("Enter your choice (s for Snake, w for Water, g for Gun): ");
    scanf(" %c", &player);

    // Generate random choice for computer
    int randomNum = rand() % 3;
    if (randomNum == 0)
        computer = 's';
    else if (randomNum == 1)
        computer = 'w';
    else
        computer = 'g';

    printf("Computer chose: %c\n", computer);

    result = checkWinner(player, computer);

    if (result == 0)
        printf("It's a DRAW!\n");
    else if (result == 1)
        printf("You WIN!\n");
    else
        printf("You LOSE!\n");

    return 0;
}
