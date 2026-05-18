#include <cs50.h>
#include <stdio.h>

void draw(int n);// must write prototype at first after writing down
int main(void)
{
    int height = get_int("Height:");
    draw(height);// to draw a pyramid and pass in height
}
void draw (int n)// with loop  //n for height
{
    for (int i = 0; i < n; i++)// start from one so 0+1
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");// at end i move the curser to the next line
    }
}


