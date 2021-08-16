#include <iostream>
#include <stdlib.h>
#include "IDIO.h"
using namespace std;

string GetInput(string INDICATOR)
{
    string in;
    cout << "REQ" << INDICATOR << " ";
    cin >> in;
    return in;
}

int CheckIfIsQuestion(string INPUT)
{
    string QuestionKeywords[6] = {"Who","What","Where","Why","When","?"};

    for(string item : QuestionKeywords)
    {
        cout << item << endl;
    }
    //if(INPUT)
    return 0;
}