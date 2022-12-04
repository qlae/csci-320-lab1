#include <stdio.h>
#include <stdlib.h> 
#include <string.h>  

void mysteryExplode (const char *string, char **dest, int *length);
void mysteryEmplode (char **string, const char *dest, int length) ;

int main()
{

int length;

char *string1 = (char *)malloc(50* sizeof(char));
char *dest1 = (char *)malloc(50* sizeof(char));

scanf("%s" , string1);
mysteryExplode(string1, &dest1, &length) ;
printf("%s ", dest1);
/*mysteryImplode(&string, dest, length) ;
printf ("%s ", string) ;
*/
free(string1) ;
free(dest1);

return 0;
}

void mysteryExplode (const char *string, char
**dest, int *length)
{
int i, j, k;
int stringLength = strlen(string) ;
*length = stringLength * 2 - 1;

for (i = 0, j = 0; i < stringLength; i++)
{
    for(int k=0; k<=i;k++)
    {
        (*dest) [j] = string[k];
        j++;
    }
}
(*dest)[j] = '\0';
}
