#include <stdio.h>
#include "consumer.h"

#ifndef RENTAL // prevent multiple inclusion
#define RENTAL 250 // monthly rental charge
#endif
 
#ifndef RATE
#define RATE 4 // per unit rate
#endif
 
#ifndef SUBSIDY
#define SUBSIDY 150 // subsidy amount
#endif

void show(consumer *c)
{
    // calculate bill amount
    c->bill = RENTAL + RATE * c->units;
 
    // check if subsidy is applicable
    if (c->units < 100)
    {
        c->subsidy = SUBSIDY;
        c->bill = c->bill - c->subsidy; // deduct subsidy from bill
    }
    else
    {
        c->subsidy = 0;
    }
 
    // output consumer details and bill amount
    printf("\n\n **** BILL GENERATED ****");
    printf("\n---------------------------------");
    printf("\nConsumer Name:      %s", c->name);
    printf("\nUnits consumed:     %d\n", c->units);
    printf("Subsidy (if any):   Rs. %.2f\n", c->subsidy);
    printf("Total Bill Amount:  Rs. %.2f\n", c->bill);
    printf("---------------------------------");
}