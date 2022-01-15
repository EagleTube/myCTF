#include <iostream>
#include <cstring>

using namespace std;

class Finale{
  private:
    int sessionstart;
    string textdisplay;

  public:
    int arr1[6] = {16,18,20,5,1,7};
    int arr2[6] = {3,11,9,15,2,7};
    int arr3[6] = {2,6,5,1,8,0};
    int arr4[6] = {1,3,3,7,5,9};
    char noth1[200] = "etTRCejNZ9Ro6L20aryqVE3IW9C5osTptOgpZCnsIzOKNDxPnnQ2TQYHyN0DEjlUqkU7pLKK4SIGkJGTo63bZO098JDQ33KtRgMV";
    char f[100] = "iBidh7dqhm2<1";
    char noth2[200] = "i8DfMpNoinwqGwV98i7q";
    char m[100] = "\\;^nCy6jUBIlQO*";
    char noth3[200] = "EIkjbr6hN3UWrWkUq5ugje0eObAaOkICnNjk23vvqIoPM3RGmK";
    char l[100] = "D+i3De]G,maCR@";
    char userlogin[250]="Admin\n";
    char s2[100] = "5897:;d6h@9n34i7kBbh49::6767>Ab87k:98537";
    char userpass[250]="Radiation@Nuclear#2022";
    
    void recover(){
      cout << userlogin;
      cout << userpass << endl;
    }

    void authentication(char u[250],char p[250])
    {
      if(strcmp(u,userlogin)==0 && strcmp(p,userpass)==0)
      {
        this->sessionstart=1;
      }
      else
      {
        this->sessionstart=0;
      }
    }
    int getSession()
    {
      return sessionstart;
    }
    
    string first(){
        int i,j=0,k=0;
        for(i = 0; (i < (strlen(f)) && f[i] != '\0'); i++)
        {
            if(j>=(sizeof(arr1)/sizeof(arr1[0])) )
            {
                j=0;
            }
            f[i] = f[i]-arr1[j];
            j=j+1;
        }
        return f;
    }
    string middle(){
        int i,j=0,k=0;
        for(i = 0; (i < (strlen(m)) && m[i] != '\0'); i++)
        {
            if(j>=(sizeof(arr2)/sizeof(arr2[0])) )
            {
                j=0;
            }
            m[i] = m[i]-arr2[j];
            j=j+1;
        }
        return m;

    }
    string last(){
        int i,j=0,k=0;
        for(i = 0; (i < (strlen(l)) && l[i] != '\0'); i++)
        {
            if(j>=(sizeof(arr3)/sizeof(arr3[0])) )
            {
                j=0;
            }
            l[i] = l[i]+arr3[j];
            j=j+1;
        }
        return l;
    }
    void secondflag(){
        int i,j=0,k=0;
        for(i = 0; (i < (strlen(s2)) && s2[i] != '\0'); i++)
        {
            if(j>=(sizeof(arr4)/sizeof(arr4[0])) )
            {
                j=0;
            }
            s2[i] = s2[i]-arr4[j];
            j=j+1;
        }
        cout << "\nMCTF{" << s2 << "}" << endl;
    }
};
void CaptureThisFlag()
{
    Finale MCTF;
    cout << "\nMCTF{" << MCTF.first();
    cout << "_[" << MCTF.middle();
    cout << "]_" << MCTF.last();
    cout << "}2022" << endl;
}
int main(void)
{
 int authentication = 0xdf1337df;
 int nothing1 = 0x12349876;
 int obfushidden = 0xBADB1735;
 int nothing2 = 0x77119922;
 int hidden = 0xFA5401E0;
 int nothing3 = 0x1EE71DD7;
 char cUsername[250];
 char cPassword[250];
 char buffer[360];

 Finale myCTF;
 cout << "Username: ";
 fgets(cUsername, sizeof(cUsername),stdin);
 cout << "Password: ";
 cin >> cPassword;

  myCTF.authentication(cUsername,cPassword);

  if(myCTF.getSession()==1 || authentication==0xFA5401E0)
  {
      cout << "So you here just for flag? hmmm enter something~ : ";
      cin >> buffer;
      if(strcmp(buffer,"something")==0){
          cout << "LOL xD You really entered something" << endl; 
      }
      else{
          if(buffer)
          cout << "Theres must be something!" << endl;
      }
      if(obfushidden==0x1337DC7F)
      {
        cout << "Here your username and password\nPlease dont forget again?\n";
        myCTF.recover();
      }
      if(obfushidden==0x6E7FDA65)
      {
        cout << "Flag for ya~";
        myCTF.secondflag();
      }
  }
  else
  {
    cout << "\nUsername entered : ";
    printf(cUsername);
    cout << "\nInvalid Credentials!";
    printf("\nLocked key = %x",authentication);
  }
}