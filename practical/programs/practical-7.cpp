#include<iostream>
using namespace std;

char cipherText[300];
int occurrence[2][26];

void counter()
{
    for(int i=0;cipherText[i]!='\0';i++)
        if(cipherText[i]>='A' && cipherText[i]<='Z')
            occurrence[1][cipherText[i]-'A']++;

    for(int i=0;i<26;i++)
        occurrence[0][i] = i+97;
    for(int i=0;i<25;i++)
    {
        for(int j=i+1;j<26;j++)
        {
            if(occurrence[1][i] < occurrence[1][j])
            {
                int temp = occurrence[0][i];
                occurrence[0][i] = occurrence[0][j];
                occurrence[0][j] = temp;

                temp = occurrence[1][i];
                occurrence[1][i] = occurrence[1][j];
                occurrence[1][j] = temp;
            }
        }
    }
    for(int i=0;i<26;i++)
        cout << char(occurrence[0][i]) << " -> " << occurrence[1][i] << endl;
}
int main()
{
    cout << "Enter cipher text:";
    cin >> cipherText;

    cout << "count char occurrence from cipher text:" << endl;
    counter();
}
/*
INPUT:
cipherText:
TRNHBNICRHQSNTQFVVFYGFGFGBYHQNIFYGIRACGYDYESTRLNHIQRGIFVVRAJHRTYGQYGTNSNITHENGTCFAYDDRERVJHNIQSGRPRGHYDQRGIGJQORHFVIPYWRHYVFZYGRIPYWRHYICHRRYGRVFZWRHYIPYBYJHQSNDDADNVVQNIRVNHRMRHSAYYLRHNIFMRNGTCRDLBJDFGLHYURAIPYHXFLHYQFVRICNIFPFDDVRAJHRGFGRVELFFGICFVVRQRVIRH

OUTPUT:
r -> 34
y -> 23
h -> 22
g -> 20
f -> 20
i -> 19
v -> 17
n -> 16
q -> 12
d -> 11
t -> 8
c -> 7
a -> 7
s -> 6
p -> 6
l -> 6
j -> 6
b -> 4
e -> 4
w -> 3
m -> 2
z -> 2
x -> 1
o -> 1
u -> 1
k -> 0
*/
