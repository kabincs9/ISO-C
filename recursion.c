#include <cs50.h>
#include <stdio.h>
void draw(int n);
int main(void)
{
    int height = get_int("Height:");
    draw(height);

}
void draw(int n)
{
    if (n == 0)// like dont print this or like you found no pyramid
    {
        return;

    }
    // to print the pyramid of the height one
    draw(n-1);// like pyramid of height 4 is pyramid of height 4-1 row
// onced done all thing give me one final row
// it rewines gain like 0 to n-1 first of 0
for ( int i = 0; i < n; i++) // another row
    {
        printf("#");

    }// a new line
    printf("\n");

}
