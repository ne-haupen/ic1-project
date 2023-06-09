#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void level_one() {
    int user_answer;
    printf("Level one is head or tails guessing game.\n"
    "You put your bet an guess if coin lands heada or tails.\n"
    "If you win you gain twice the amount guessed.>\n"
    "If you loose you loose the whole amount.\n"
    "You win if you gain 100_000 moneroji");

}

int main(void) {
    level_one();
    srand(time(NULL)); //initialize random number generator

    unsigned int amount = 100; //initial value is 100 moneroji
    int bet_amount;
    int rand_value; // 1 represents tails; 2 represents heads
    int user_guess;

    while(amount > 0 && amount < 100000){
        printf("Current amount is %u, how much do you want to bet?\n", amount);
        puts("Bet amount: ");
        scanf("%d", &bet_amount);
        //printf("bet_amount is %d", bet_amount);

        while(bet_amount > (int)amount){
            printf("You can't bet more than you have. Choose value thats lower or equal than your funds.\n");
            puts("Bet amount: ");
            scanf("%d", &bet_amount);
            printf("input is %d", bet_amount);
        }

        puts("Heads or tails?");
        puts("0) end game");
        puts("1) heads");
        puts("2) tails");

        puts("Guess: ");
        scanf("%d", &user_guess);
        if(!user_guess){
            exit(-1);
        }
        while(user_guess != 1 && user_guess != 2) {
            puts("you can only guess 1 or 2:");
            scanf("%d", &user_guess);
            printf("input is %d\n", user_guess);
        }

        rand_value = rand()%2+1;

        if(rand_value == user_guess) {
            printf("Congratulations! You gain %d moneroji.\n", bet_amount);
            amount += bet_amount;
        }else {
            puts("Bad luck, you gain nothing");
            amount -= (bet_amount < 0)? -bet_amount:bet_amount;
        }
    }

    if(amount > 100000) {
        printf("You won. Total winning are %u\n", amount);
        srand(0);
        return 0;
    }else {
        puts("You lost :( better luck next time");
        puts("exiting...");
        return 1;
    }
}
