#include <iostream>
#include <cstring>

using namespace std;

int toTheFlag;

string CaptureThisFlag()
{
    string flag="$CTF{B1n4rY_XpL0it4t1oN}";
    return flag;
}

void getstring(char *string)
{
    printf(string);
    if(toTheFlag)
    {
        cout << CaptureThisFlag();
    }
}

int main(int argc, char** argv)
{
    if(argv[1]!="")
    {
        getstring(argv[1]);
    }
    else
    {
        cout << "Blank input!";
    }
}
