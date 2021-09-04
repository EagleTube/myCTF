#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <fstream>
#include "stdio.h"

using namespace std;


class CTF{
  private:
    int sessionstart;
    string textdisplay;

  public:
    char userlogin[50]="3EGl_*_3-3ye_24";
    char userpass[50]="P4Ss_W0rdXxX-Y2d";
    
    void authentication(char u[50],char p[50])
    {
      if(strcmp(u,userlogin)==0 and strcmp(p,userpass)==0)
      {
        sessionstart=1;
      }
      else
      {
        sessionstart=0;
      }
    }
    int getSession()
    {
      return sessionstart;
    }
    void authnumber(int x)
    {
      if(x==1)
      {
        textdisplay="Welcome to CTF Challenge(Level easy)";
      }
      else
      {
        textdisplay="Access Denied!";
        cout<<textdisplay;
      }
    }
};
void CaptureThisFlag()
{
  long int key = 3461337;
  char c;
  fstream fin;
  fstream fout;
  fin.open("eagle.txt", fstream::in);
  fout.open("flags.txt", fstream::out);
  
  while (fin >> noskipws >> c) {
  
        long int temp = (c - key);
        fout << (char)temp;
  }
  
  fin.close();
  fout.close();
}
int main(void)
{
 int authentication = 0;
 char cUsername[50];
 char cPassword[50];
 char smashed[35];
 char valueX[35]="CTF{_SOMETHING_}";

 CTF myCTF;

 cout << "Username: ";
 cin >> cUsername;
 cout << "Password: ";
 cin >> cPassword;

  myCTF.authentication(cUsername,cPassword);
  myCTF.authnumber(myCTF.getSession());
  if((myCTF.getSession()==1))
  {
    cout << "Here we go! smash! and crash! again! \n";
    cin>>smashed;
    if(strcmp(smashed,valueX)==0)
    {
      cout << "Well Done you just got fake flag :P";
    }
    else
    {
      cout << "Not match la macha!";
    }
  }
  else
  {
    cout << "Huh? Bye :P";
  }
}