#include <stdio.h>
#include <stdlib.h>
#include "turnstyle.h"
#include "turnstyle_ext.h"

struct turnstyle_person_t
{
    char *name;
};

void SMUDGE_panic(void)
{
    printf("Game over!\n");
    exit(-1);
}

void flashLEDs(const turnstyle_coin_t *coin)
{
    printf("Blinky blinky\n");
}

void soundOkay(const turnstyle_person_t *person)
{
    printf("Welcome to the other side of the turnstyle, %s.\n", person->name);
}

void lockedEnter(void)
{
    printf("Bar the gate!\n");
}

void lockedExit(void)
{
    printf("Leaving the locked state.\n");
}

void unlockedEnter(void)
{
    printf("Unlocking the turnstyle.\n");
}

int main(void)
{
    turnstyle_person_t nikky;

    nikky.name = "Nikola";
    turnstyle_coin(NULL);
    turnstyle_person(&nikky);
    return 0;
}
