typedef struct {
    char name[50]; // consumer name
    int units; // units consumed
    float bill; // bill amount
    float subsidy; // subsidy amount
} consumer;

void show(consumer *);