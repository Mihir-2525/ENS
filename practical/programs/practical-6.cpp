#include<iostream>
using namespace std;
char plainText[300];
char cipherText[300];
void monoalpha()
{
    int i,temp;
    char key[27], decrypText[300], c = 'a';

    for(i=0;i<26;i++)
    {
        cout << "Enter key for mapping " << c++ << " -> ";
        cin >> key[i];
    }
    cout << endl;

    for(i=0;i<26;i++)
        cout << "--";
    cout << endl;

    c = 'a';

    for(i=0;i<26;i++)
        cout << c++ << " ";
    cout << endl;

    for(i=0;i<26;i++)
        cout << key[i] << " ";

    for(i=0;plainText[i]!='\0';i++)
        cipherText[i] = key[plainText[i] - 97];

    cout << endl;
    cout << "cipherText = " << cipherText;

    cipherText[i] = '\0';

    for(i=0;cipherText[i]!='\0';i++) {
        for(int j=0;key[j]!='\0';j++) {
            if(cipherText[i] == key[j]) {
                decrypText[i] = (j+97);
            }
        }
    }
    
    //hare ram hare ram hare krishna hare ram

    decrypText[i] = '\0';
    cout << endl << endl;
    cout << "Decryption Text = " << decrypText;
}
int main()
{
    cout << "Enter plain text:";
    cin >> plainText;
    monoalpha();
}
/*
INPUT:
dearfathermyadmissionininformationtechnologydepartmentissecuredonmondayatdrgandhicollegesuratmynewenrolmentnumberistwozerosixonetwozerothreeonesixzerotwofourmyallclassmatesareverycooperativeandhelpfulinprojectworkipromisethatiwillsecureninesgpiinthissemester

KEY MAPPING:
N O A T R B E C F U X D Q G Y L k H V I J M P Z S W

cipherText:
TRNHBNICRHQSNTQFVVFYGFGFGBYHQNIFYGIRACGYDYESTRLNHIQRGIFVVRAJHRTYGQYGTNSNITHENGTCFAYDDRERVJHNIQSGRPRGHYDQRGIGJQORHFVIPYWRHYVFZYGRIPYWRHYICHRRYGRVFZWRHYIPYBYJHQSNDDADNVVQNIRVNHRMRHSAYYLRHNIFMRNGTCRDLBJDFGLHYURAIPYHXFLHYQFVRICNIFPFDDVRAJHRGFGRVELFFGICFVVRQRVIRH
*/
