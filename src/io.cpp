#include <iostream>
#include <stdlib.h>
#include "IDIO.h"
using namespace std;

string GetInput(string INDICATOR)
{
    string in;
    cout << "REQ " << INDICATOR << " ";
    cin >> in;
    
    return in;
}