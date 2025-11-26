🐍💧🔫 Snake–Water–Gun Game (C Language)

A lightweight yet engaging CLI-based Snake–Water–Gun game, fully written in pure C.
This mini-project demonstrates random number generation, decision-making logic, modular functions, and clean coding practices—perfect for beginners and students.

⭐ Key Highlights

🎮 Interactive Gameplay – user vs computer

🔀 True randomness with rand() + time()

🧠 Modular function design (checkWinner() keeps logic clean)

🧩 Beginner-friendly & easy to understand

⚡ Fast execution and minimal code

🔧 Highly customizable for future upgrades

✨ Unique Touch:

Includes extendable architecture for adding rounds, scoreboard, emoji mode, sound effects, and AI difficulty modes.

📘 Game Rules
Player Option	Computer Option	Result
Snake (s)	Water (w)	Player Wins
Water (w)	Gun (g)	Player Wins
Gun (g)	Snake (s)	Player Wins
Same Choice	Same Choice	Draw
📂 Project Structure
📦 Snake-Water-Gun
 ┣ 📄 snake_water_gun.c
 ┗ 📄 README.md

🧑‍💻 How to Run
1️⃣ Compile the Program
gcc snake_water_gun.c -o swg

2️⃣ Run the Game
./swg

🖥️ Sample Gameplay
------ Snake Water Gun Game ------
Enter your choice (s for Snake, w for Water, g for Gun): g
Computer chose: s
You WIN!

🧾 Source Code
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

🚀 Possible Future Upgrades

🎭 Emoji Mode (🐍💧🔫)

🔊 Sound Effects on win/lose

📊 Scoreboard & multi-round gameplay

🎮 Beginner / Hard difficulty modes

🖥️ GUI version using SDL/GTK

🌐 Online multiplayer mode (if extended beyond C)
 OUTPUT SCREENSHORT
 ![image alt]()
 ![image alt](image__url)
 ![image alt](image__url)
