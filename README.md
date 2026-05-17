# Number Guessing Game

## What it does
This is a fun, interactive console game I built in C. The computer randomly selects a secret number between 1 and 100, and your goal is to guess it. 

Every time you make an incorrect guess, the program gives you a helpful hint by telling you if your guess was "too high" or "too low." It also tracks how many attempts it took you to find the right number, challenging you to beat your high score.

## Why I built this
While this is a classic beginner project, building it helped me move past static, predictable code and work with dynamic runtime states. Working on this project helped me understand:
1. **Random Number Generation:** Learning how to use `rand()` alongside `srand(time(NULL))` to seed the pseudo-random number generator so that the secret number changes every single time you restart the game.
2. **Conditional Logic Chains:** Structuring `if-else` statements cleanly to instantly compare user inputs against the secret number.
3. **Interactive Control Loops:** Implementing a robust `do-while` loop that keeps the game running seamlessly until the winning condition is finally met.

## How it works (In Simple Terms)
- **Seeding the Clock:** The program uses your computer's current time as a baseline to ensure the numbers generated are genuinely unpredictable.
- **The Core Game Loop:** A loop continuously prompts you for a number, increments an internal turn counter, and checks your input.
- **Dynamic Feedback:** The system provides instant feedback to narrow down your guessing range until you hit the exact target match.

## How to run it
1. Open your terminal or command prompt inside this project folder.
2. Compile the source file using a standard C compiler:
   gcc guessing_game.c -o guessing_game

3. Run the compiled executable:
   - Linux/macOS: `./guessing_game`
   - Windows: `guessing_game.exe`

4. Enter your guesses in the terminal and try to find the secret number in the fewest tries possible!

## Tech Used
- **Language:** C
- **Compiler:** GCC
- **Core Concepts:** Pseudo-Random Number Generation (`stdlib.h`, `time.h`), `do-while` Loops, and Conditional Control Structures

## Author
Shafin Alam  
GitHub: [shafinalam07](https://github.com/shafinalam07)
