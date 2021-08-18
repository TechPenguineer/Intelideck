#include <iostream>
#include <stdlib.h>
#include <string>
#include "IDIO.h"

void ParseStringToCharArray(string STRING)
{
    char p[STRING.length()];

    int i;
    for(i=0; i<sizeof(p); i++)
    {
        p[i] = STRING[i];
    }
}