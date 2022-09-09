/*A program for Mono-alphabetic Cipher Statistical Attack
It counts occurrence of individual characters.*/
#include<stdio.h>
int main()
{
    char ct[300];
    int occ[2][26] = {0}, i,j,temp;
    printf("Enter Ciphertext:");
    scanf("%s",ct);
    //Fill freq count in first row
    for(i=0; ct[i]!='\0'; i++)
    {
        if(ct[i]>='A' && ct[i]<='Z')
            occ[0][ct[i]-'A']++;
    }
    //Fill second row with a to z
    for(i=0; i<26; i++)
        occ[1][i] = i + 97;
    //Arrange them in descending order
    for(i=0; i<25; i++)
	   for(j = i+1; j<26; j++)
		  if(occ[0][i] < occ[0][j])
          {
              temp = occ[0][i];
              occ[0][i] = occ[0][j];
              occ[0][j] = temp;

              temp = occ[1][i];
              occ[1][i] = occ[1][j];
              occ[1][j] = temp;
          }
    printf("\nIN DESCENDING ORDER:");
    for(i=0; i<26; i++)
       printf("\n%c -> %d",occ[1][i],occ[0][i]);
}
