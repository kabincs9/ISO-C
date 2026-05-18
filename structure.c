#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct

{
    string name;
    string number;

}person;

int main (void)
{
    person people[3];
    people[0].name = "kabin";
    people[0].number = "9866839364";

     people[1].name = "david";
    people[1].number = "9966839364";

     people[2].name = "tara";
    people[2].number = "9966839364";

    string name = get_string("Name:");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;

        }
    }

printf("Not found\n");
return 1;


}
