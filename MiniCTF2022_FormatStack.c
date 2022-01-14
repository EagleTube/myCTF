// CODED BY EAGLE EYE

#include <stdio.h>

void flags();
int main() {
    int secret = 0x3a61e37e;
    int chgx = 0x1337dfdf;
    char name[100] = {0};
    read(0, name, 0x100);
    if (chgx == 0x3a61e37e) {
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
    char f[100] = "G=N@u+--1YQb*Y.l-YS*o9Y+--1w";
    for(int i = 0; (i < 100 && f[i] != '\0'); i++)
    {
        f[i] = f[i] + 6;
    }
    printf(f);
}
