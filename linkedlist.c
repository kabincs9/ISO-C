#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
typedef struct node

{
    int number;
    struct node *next;

} node;
int main(void)
{ // like balnk at first
    node *list = NULL; // as box in copy like there are no list of numbers
 for (int i = 0; i < 3; i++)
 { // store in n  and n points to memory by making two blocks
    node *n = malloc(sizeof(node)); // to pointer n  and represent a node as char * last time
    if (n == NULL)
    {
        return 1;

    } // and to go to that address *n
    n->number = get_int("Number:");
   // slow way(*n).number = get_int("Number:");
     // changing empty value to one
// or directlu (*n).number = 1; = n-> number = 1;
// faster  n-> number = 1; // and we go there
//SLOW (*n).next = NULL;
// oe now less assume next
n-> next = list;
// no thing null
list = n;
// now directly mentioning the value to list to n like 1 for example
// or pointing the value of list to 1
// going to most nearest recently

 }
 // time passes

// like print ptr and print first one ...
node *ptr = list; // just track not pointing list as list only contain address pointing to 3 as example
while (ptr !=NULL)
{
printf("%i\n", ptr->number);
// follow the arrow fiels get the number and print it out
// how to transfer ptr so prt now to next
ptr = ptr->next;
// which prints down to up
}





}
