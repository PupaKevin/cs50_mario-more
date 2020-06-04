#include <cs50.h>
#include <stdio.h>
void pyramid(char p, int n);  //declare function

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: "); // this gets the input from the users
    }
    while (n < 1 || n > 8);  // this creates and invalid input

    for (int i = 0; i < n; i++) // this represents the rows = i 
    {
                pyramid(' ', n - 1 - i);
                pyramid('#', i + 1);
                pyramid(' ', 2);
                pyramid('#', i + 1);

        printf("\n");

    }

 }
void pyramid(char p, int n) // take a character and repeat how many times i want to see that character
{
    for (int i = 0; i < n; i++) // this creates a for loop
    {
        printf("%c", p); // prints character a c amount of time
    }
}

