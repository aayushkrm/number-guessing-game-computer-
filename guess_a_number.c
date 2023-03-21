#include <stdio.h>

/*
Whot goes here? At least, how should it be?

1. Human thinks about a number. Some random number.
2. Computer asks humab questions, following bisection algorithm.
3. Computer decides, when it is confident about the number.
4. Computer prints its guess then.

Again, in feew words: not a human, but computer should guess a number! =)
*/

int main()
{
    int lower = 0, upper = 1024;

    // here upper stands for non-inclusive bound
    printf("Think of a number between %d and %d\n", lower, upper - 1);
    // and it sounds good then to ask user
    // if the number is LESS than something

    // guessing code here
    // C also has while cycle if needed =)
    // while ( condition ) { body; }

    return 0;
}
