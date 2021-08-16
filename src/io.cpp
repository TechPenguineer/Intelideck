#include <iostream>
#include <stdlib.h>
#include "IDIO.h"
#include <cctype>
#include <algorithm>
using namespace std;

string GetInput(string INDICATOR)
{
    string in;
    cout << "REQ" << INDICATOR << " ";
    cin >> in;

    auto lower_STR = tolower(in)    

    return lower
}

int CheckIfIsQuestion(string INPUT)
{
    string QuestionKeywords[6] = {"Who","What","Where","Why","When","?"};

    for(string item : QuestionKeywords)
    {
        
    }
    //if(INPUT)
    return 0;
}