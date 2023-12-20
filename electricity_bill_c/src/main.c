#include <stdio.h>
#include <errno.h>
#include "consumer.h"
#include <string.h>
#define MAX_NAME_LENGTH 50

int main()
{
    // create a consumer object
    consumer *c;

 
    // input consumer name and units consumed
    printf("\n\n******  ELECTRICITY BILL APP  ******\n\n");
    printf("Enter consumer name: ");
    scanf("%s", &c->name); // read name with spaces


    while (strlen(c->name) > MAX_NAME_LENGTH) {
        printf("Name is too long. Please enter a name with at most %d characters: ", MAX_NAME_LENGTH);
        scanf(" %s", &c->name);
    }

    printf("Enter units consumed: ");
    scanf("%d", &c->units);
    while (c->units < 0)
    {
        printf("\n\nError: Units consumed cannot be negative. Please try again.\n");
        printf("Enter units consumed: ");
        scanf("%d", &c->units);
    }
 
    // call the show function and pass the consumer object as a pointer
    show(c);
 
    return 0;
}
 
