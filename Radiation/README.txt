### INCASE OF ERROR ####
Please unzip DLL.zip to current folder
And retry to execute


### Hints for decryption ###

theres 11 key array where each value must be below than 20
example : array[1,2,3,4,5,6,7,8,9,10,11]

here the example of code from c++

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11}; // find the key!
    char flag[100] = "TEXT_TO_ENCRYPT";
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
        flag[i] = flag[i]+arr[j];
        j=j+1;
    }

that key are just example
it is different from our key

the key must be integer

### Hints for exploitation ###

get the address GetSecret() function
the buffer size above 300 character




