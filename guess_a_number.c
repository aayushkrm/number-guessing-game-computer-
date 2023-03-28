#include <stdio.h>

/*
1. Computer thinks of a number, which will be the guess.
2. Computer asks human if their number is less than, greater than, or equal to the guess.
3. If the guess is too low, the lower bound of the range is adjusted.
4. If the guess is too high, the upper bound of the range is adjusted.
5. Repeat steps 2-4 until the guess is correct.
*/

int main()
{
    int lower = 0, upper = 1024;
    int guess = (lower + upper) / 2;
    char response;

    printf("Think of a number between %d and %d\n", lower, upper - 1);

    while (lower <= upper)
    {
        // Compute the midpoint
        
        // Ask the user if their number is less than, greater than, or equal to the guess
        printf("Is your number less than, greater than, or equal to %d?\n", guess);
        scanf(" %c", &response);

        // Adjust the range based on the user's response
        if (response == 'y')
        {
            upper = guess - 1;
            guess = (lower + upper) / 2;
        }
        else if (response == 'n')
        {
            lower = guess + 1;
            guess = (lower + upper) / 2;
        }
    }
print("The number you were thinking of is %d\n", guess);

return 0;
}
