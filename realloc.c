#include <stdio.h>
#include <stdlib.h>
int main(void)
{// using mallloc not array
    int *list = malloc(3 *sizeof(int));// AS Malloc memory.. stdlib
    if (list == NULL)//as if no memory malloc put Null so
{
    free(list);// must free memory at last or check all if memory leakage
    return 1; //exit
}
// as size of 3

list[0] = 1;
list[1] = 2;
list[3] = 3;
// time passes and we need 4 integer and cant change program
// if redy give me 4
int *tmp = realloc(list * sizeof(int)); // or best way to int *tmp = realloc.. look now one realloc in file class code
// now list
    if (list == tmp)//as if no memory malloc put Null so
{
    return 1; //exit
}
    // no need like list and mallo....for (int i = 0; i < 3; i++)
///{// put in temp arry waht ever original array at location as well
   /// tmp[i] = list[i]; //copying one into another
//}
// now add 4
tmp[3] = 4;

free(list); // so it free it and hand it back to operating system
list = tmp; // and to print that
for (int i = 0; i < 4; i++)
{
    printf("%i\n", list[i]); //as it can go upto index four

}

// time passes again and free that list also
free(list);
return 0;

}
