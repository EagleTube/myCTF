// CODED BY EAGLE EYE

#include <stdio.h>

void flags();
int main() {
    int secret = 0x1337; // change this
    int chgx = 0x1337dfdf; // change this
    char name[100] = {0};
    read(0, name, 0x100);
    if (chgx == 0x1337) {
        flags();
    } else {
        printf("\nHello ");
        printf(name);
        puts("Please try again!");
        printf("\nCurrent value for secret = %x\n",chgx);
    }
}

void flags()
{
    char f[100] = "EncryptedText"; // change this
    for(int i = 0; (i < 100 && f[i] != '\0'); i++)
    {
        f[i] = f[i] + 999; // change this
    }
    printf(f); // output for decrypted text
}
