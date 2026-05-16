#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;
    
    srand(time(0));
    secret = rand() % 100 + 1;
    
    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if(guess < secret) {
            printf("Too low! Try higher.\n");
        } else if(guess > secret) {
            printf("Too high! Try lower.\n");
        } else {
            printf("\nCorrect! You guessed it in %d attempts!\n", attempts);
        }
    } while(guess != secret);
    
    return 0;
}