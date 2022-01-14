#include <iostream>
#include <cstring>

/*
    Author : Eagle Eye
    Date : 1/13/2022
*/

using namespace std;

string Secret(){
    int arr[] = {20,15,10,5,3,6,9,12,16,18,19};
    char flag[100] = "F?<7bT^OAEGfPXX3Sh@bErW?W6QM";
    int i,j=0,k=0;
    for(i = 0; (i < (strlen(flag)) && flag[i] != '\0'); i++)
    {
        if(j>=(sizeof(arr)/sizeof(arr[0])) )
        {
            j=0;
        }
        if(flag[i]==' ')
        {
            flag[i]='_';
        }
        flag[i] = flag[i]-arr[j];
        j=j+1;
    }
    return flag;
}

void GetSecret(){
    cout << Secret() << endl;
}

string first(){
    char flag[100] = "X?W?d@<Lj";
    int i;
    for(i = 0; (i < 100 && flag[i] != '\0'); i++)
    {
        flag[i] = flag[i] - 11;
    }
                
    return flag;
}

string last(){
    char flag[100] = "\\@OVMQ-";
    int i;
    for(i = 0; (i < 100 && flag[i] != '\0'); i++)
    {
        flag[i] = flag[i] + 3;
    }
                
    return flag;
}

int main(){
    char flag[100] = "F?<7bT^OAEGfPXX3Sh@bErW?W6QM";
    char buffer[360];
    int choice;
    string f=Secret();
    string s=first();
    string l=last();
    string ans;

    cout << "\nMy Secret Password encrypted T_T\nEach char have different key, \nplease decrypt for me or just exploit \nthis file to reveal the pass";
    cout << "\nHere the encrypted pass -> "<<flag<<"\n";

    cout<<"Please choose 1 or 2\n(0.Exit and cry, 1.Submit decrypted string, 2.For exploiting way) : ";

    cin >> choice;

    switch(choice){
        case 1:
            cout << "\nGive me the decrypted string = ";
            cin >> ans;
            if(strcmp(ans.c_str(),f.c_str())==0){
                cout << "\nHooray finally you got it!";
                cout << "\nHere you flag -> MCTF{"<< s <<"[" << f << "]" << l <<"}\n";
            }
            else{
                cout << "\nThats not my password T_T!\n";
                cout << "\nTry again";
            }
        break;
        case 2:
                cout << "\nOr exploit this!\nPlease enter something : ";
                cin >> buffer;
                if(strcmp(buffer,"something")==0){
                    cout<<"\nLOL! You entered something";
                }
                else{
                    cout << "\nUse your skill";
                }
        break;
        default:
        case 0:
            cout << "T_T sobsob!";
        break;
    }

}
//2022_NUC134RANS0M_4R3_C0M1NG
