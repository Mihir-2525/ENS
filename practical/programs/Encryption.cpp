#include<iostream>
using namespace std;
char encode(char *encode_msg,int KEY)
{
    int i;
    for(i=0;encode_msg[i]!='\0';i++)
        if(encode_msg[i]>='a' && encode_msg[i]<='z')
            encode_msg[i]=(encode_msg[i]-'a'+KEY)%26+'a';
    return encode_msg[i];
}
char decode(char *decode_msg,int KEY)
{
    int i;
    for(i=0;decode_msg[i]!='\0';i++)
        if(decode_msg[i]>='a' && decode_msg[i]<='z')
            encode_msg[i]=(encode_msg[i]-'a'+KEY)%26+'a';
    return decode_msg[i];
}

void bruteforce(char *msg)
{
    char temp[];
    for(int i=0;i<25;i++)
    {
        strcmp(temp, msg);
        decode(temp,i+1);
        cout << "decode message for key " << i+1 << " is : " << temp << endl;
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