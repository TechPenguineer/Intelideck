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
    return in;
}

int CheckIfIsQuestion(string INPUT)
{
    string QuestionKeywords[6] = {"Who","What","Where","Why","When","?"};
    auto req = GetInput(">>");
    for(string item : QuestionKeywords)
    {
        if(req==item)
        {
            cout << "Question Statement Detected for the following keyword: " << item << endl;
        }    
    }
    //if(INPUT)
    return 0;
}

void Ask()
{
    GetInput()
}