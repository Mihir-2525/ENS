#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void encode(char *encode_msg,int KEY)
{
    for(int i=0;encode_msg[i]!='\0';i++)
        if(encode_msg[i]>='a' && encode_msg[i]<='z')
            encode_msg[i]=(encode_msg[i]-'a'+KEY)%26+'a';
}

void decode(char *decode_msg,int KEY)
{
    for(int i=0; decode_msg[i] != '\0'; i++)
        if(decode_msg[i] >= 'a' && decode_msg[i] <= 'z')
            decode_msg[i]=(decode_msg[i]-'a'+KEY)%26+'a';
}

void bruteforce(char *msg)
{
    char temp1[200], temp2[200];
    strcpy(temp1, msg);
    for(int i=0;i<25;i++) {
        strcpy(temp2, msg);
        decode(temp2,i+1);
        cout << "decode message for key " << i+1 << " is : " << temp2 << endl;
    }

}

int main()
{
    char msg[200],code_msg[200];
    int key;
    
    cout << "Enter message : ";
    cin >> msg;
    cout << "Enter Key : ";
    cin >> key;
    encode(msg,key);
    cout << "Encoded Message Is : " << msg << endl;

    cout << "\nEnter Message to Decoded: " ;
    cin >> code_msg;

    bruteforce(code_msg);
    return 0;
}