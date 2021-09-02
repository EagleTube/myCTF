#include <iostream>
#include <cstring>

using namespace std;


class CTF{
  private:
    int sessionstart;
    string textdisplay;

  public:
    char userlogin[50]="CTF@Challenge_2021";
    char userpass[50]="CTF@Root_P@SsW0rds";

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
        cout<<textdisplay;
        CaptureTheFlag();
      }
      else
      {
        textdisplay="Access Denied!";
        cout<<textdisplay;
      }
    }
    void CaptureTheFlag()
    {
      cout<<"Congratulations! this is the 1st flag -> $CTF{Why_So_Serious!}";
    }
};

int main(void)
{
 int authentication = 0;
 char cUsername[50];
 char cPassword[50];
 string second;

 CTF myCTF;

 cout << "Username: ";
 cin >> cUsername;
 cout << "Password: ";
 cin >> cPassword;

  myCTF.authentication(cUsername,cPassword);
  myCTF.authnumber(myCTF.getSession());

}