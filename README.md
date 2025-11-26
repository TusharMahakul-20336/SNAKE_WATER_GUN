🐍💧🔫 Snake Water Gun — C Program

A simple and fun Snake-Water-Gun game written in C, where the user plays against the computer.
The game uses random number generation to simulate unpredictable computer moves, making each round unique.

🚀 Features

🎮 Single-player gameplay against the computer

🔁 Randomized computer choices using rand()

⚡ Fast and lightweight (pure C program)

🧠 Clear game logic using a separate checkWinner() function

🧩 Beginner-friendly example of using if/else, randomization, and user input

💡 Unique Point:

The game can be expanded into a three-round battle mode, scoreboard, or even turned into a GUI version using graphics libraries.

The code is structured so students can easily modify the logic and add new rules (e.g., “Snake drinks water but escapes gun”).

📌 Game Rules
Player Choice	Computer Choice	Result
Snake (s)	Water (w)	Player Wins
Water (w)	Gun (g)	Player Wins
Gun (g)	Snake (s)	Player Wins
Same Choice	Same Choice	Draw
🧑‍💻 How to Run

Save the code as snake_water_gun.c

Compile the program:

gcc snake_water_gun.c -o game


Run the game:

./game
🌟 Unique Improvements You Can Add

⭐ Best of 5 mode

⭐ Scoreboard tracking (Wins/Losses/Draws)

⭐ Replay option without restarting program

⭐ Emoji version (🐍 💧 🔫 instead of s/w/g)

⭐ Sound effects using a system beep or sound library
