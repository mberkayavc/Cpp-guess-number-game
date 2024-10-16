# Guess the Number Game

## About the Project
The Guess the Number Game is a simple and fun C++ console game where the user tries to guess a random number between 1 and 100. The program generates a number and gives the player 10 chances to guess it. After each guess, the program indicates whether the guess is too high or too low. When the game ends (either by a correct guess or after 10 attempts), all the guesses are displayed. The player is then asked if they want to play again.

## Technologies Used
- C++
- Console-based application

## Features
- Random number generation between 1 and 100.
- User is given 10 attempts to guess the number.
- Guidance on each guess (whether to guess higher or lower).
- Display of all guesses made by the player.
- Asking the user if they want to play again at the end.
- Dynamic memory allocation to store guesses.

## Installation and Running

### Requirements:
- C++ compiler (g++, Visual Studio, Code::Blocks, etc.)
- Any terminal or console environment

### Steps:
1. Download or copy the project files to your computer.
2. In the terminal or command prompt, run the following commands:

```bash
# Compile the code:
g++ -o guessTheNumberGame main.cpp

# Run the program:
./guessTheNumberGame
