#include<iostream>
using namespace std;
char plainText[300];
char cipherText[300];
void occ()
{
    for(i=0;i<cipherText[i];i++)

}

void encode()
{
    int i;
    char key[27], c = 'A';
    for(i=0;i<26;i++)
    {
        cout << "Enter key for mapping " << c++ << " -> ";
        cin >> key[i];
    }

    for(i=0;i<26;i++)
        cout << "--";
    cout << endl;
    c = 'A';
    for(i=0;i<26;i++)
        cout << c++ << " ";
    cout << endl;
    for(i=0;i<26;i++)
        cout << key[i] << " ";

    for(int j=0;plainText[j] != '\0';j++)
        for(i=0;i<26;i++)
            if(plainText[j] == key[i])
                cipherText[i] = key[i];
    cipherText[i] = '\0';
    cout << "\n\n" << cipherText;
}
int main()
{
    cout << "Enter plain text:";
    cin >> plainText;
    encode();
}
