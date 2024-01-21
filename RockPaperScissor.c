#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//* approach:
// printf() & scanf() to display the content and taking input from the user.
// srand() and rand() -> used to generate random numbers in the range [0, RAND_MAX]
// srand() -> use to generate a random number at each time.
// take modulo of random number with 100 to make its range between (0 - 100)
// as the range is up to 100 only, the distribution among all the options: stone, paper, scissors is equal 
// as all of them have an equal probability of coming.

//* this random number will decide the choice of computer as:
// if the number is 0 - 33 -> Stone
// if the number is 33 - 66 -> Paper
// if the number is 66 - 100 -> Scissors

//* game() function -> consists if-else statements - compare the choice of use & computer.
//* if user wins -> return 1
//* if computer wins -> return 0
//* if its a tie -> return -1

int game(char you, char computer) {
    if (you == computer) {
        return -1;
    }
    else if (you == 's' && computer == 'p') {
        return 0;
    }
    else if (you == 'p' && computer == 's') {
        return 1;
    }
    else if (you == 'z' && computer == 'p') {
        return 1;
    } 
    else if (you == 'p' && computer =='z') {
        return 0;
    }
    else if (you == 's' && computer =='z') {
        return 1;
    }
    else if (you == 'z' && computer =='s') {
        return 0;
    }
}

int main() {
    int number;
    char choice, you ,computer, result;

    srand(time(NULL));

    number = rand() % 100;

    if (number <34) {
        computer = 's';
    }
    else if (number > 32 && number < 67) {
        computer = 'p';
    }
    else if (number > 65 && number < 101) {
        computer = 'z';
    }

    printf("Enter 's' for Stone, 'p' for Paper, 'z' for Scissor, 'x' to leave the game: ");
    scanf("%c", &you);
    result = game(you, computer);

        if (you == 'x') {
            exit(0);
        }
        else if (result == 1) {
            printf("You won!\n");
        } else if (result == -1) {
            printf("You have lost!\n");
        } else {
            printf("It's a tie!\n");
        }
}