#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// moving the encryption_pt_2's reversed string's 1/2

int main(void)
{
    char* ch;
    int len, len_2;

    scanf("%[^\n]%*c", &*ch);

    len = strlen(ch);

    char* ch2 = (char*) malloc(sizeof(char) * len + 1);

    ch2[len] = '\0';

    strcpy(ch2, ch);  // without this the main ch2 would be empty.
                      // thus will give error because there would be nothing besides 1/2 of
                      // the last char of the ch string and the first half would be empty.
    if(len % 2 == 0)
    {
        len_2 = (len / 2);
    }
    else
    {
        len_2 = len / 2 + 1;
    }

    printf("%d %d\n", len, len_2);

    for(int i = len_2; i < len; i++)
    {

        if((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            ch2[i] = ch[i] - 1; // moves one char to right and puts it in a same place of the original array
        }
        else if(ch[i] == (char) 32)
        {
            ch2[i] = ch[i];      // ignores any thing besides letters
        }

        printf("%c -> ", ch[i]); // error handler
        printf("%c\n", ch2[i]);
    }



    printf("%s <-> %s -- %c\n", ch, ch2, ch2[5]);

    free(ch2);
}
