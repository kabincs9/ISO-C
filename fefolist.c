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
    {// if first second third pass but forth failed the
        // free any memory already malloc
        return 1;

    } // and to go to that address *n
    n->number = get_int("Number:");
   // slow way(*n).number = get_int("Number:");
     // changing empty value to one
// or directlu (*n).number = 1; = n-> number = 1;
// faster  n-> number = 1; // and we go there
//SLOW (*n).next = NULL;
// oe now less assume next
// now no need as fefo n-> next = list;
// no thing null
//no fefo list = n;
// now directly mentioning the value to list to n like 1 for example
// or pointing the value of list to 1
// going to most nearest recently//
// new one
 n->next = NULL;
// if list is empty
 if(list == NULL)
 {
    list = n;
 }
 // if list has numbers already
 else
{ // or while loop
    //creates
    for (node *ptr = list; ptr!= NULL; ptr = ptr->next)
{
        // if at the end of list
        if(ptr->next == NULL)
        { // to this value the address of new n and break whole loop
            ptr->next = n;
            break;
        }


}
}


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

// to make shorter this // like print ptr and print first one ...
//node *ptr = list; // just track not pointing list as list only contain address pointing to 3 as example
//while (ptr !=NULL)
//.. we can directly
// using same for loop
//     for (node *ptr = list; ptr!= NULL; ptr = ptr->next)
//{
// printf("%i\n", ptr->number);
//}
// return0;



// time passes
node *ptr = list;
while (ptr !=NULL)
{ node *next = ptr->next;
    free(ptr); // free the memory
    ptr = next;
}
return 0;
}
