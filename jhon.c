#include <cs50.h>
#include <stdio.h>
#include <string.h>

// code ls cd,  make hello , ./hello
int main(void)
{
    string names[] = {"abc", "kabin" , "jhon"};
    string numbers[] = {"+3843", "+47389373", "+123-345-5654"};
    string name = get_string("Name:");
    for (int i =0; i < 3; i++)
    {
        if(strcmp(names[i], name) == 0)//as matrix
        {
   printf("Found %s\n", numbers[i]);
   return 0;
        }
         printf("Not Found\n");
        return 1;

    }
}
