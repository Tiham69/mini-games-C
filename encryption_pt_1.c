#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char* ch;   // this ch should only contain 1000 charecters
    int len;

    scanf("%[^\n]%*c", &*ch);

    len = strlen(ch);

    char* ch2 = (char*) malloc(sizeof(char) * (len + 1));

    printf("%s %d\n", ch, len);

    for(int i = 0; i < len; i++)
    {
        if((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] == (char) 32))
        {

            char tmp = ch[i];
            printf("%c | ", tmp);
            ch2[i] = tmp + 3;
            printf("%c ", ch2[i]);
            if(ch2[i] == '#')
            {
                ch2[i] = ' ';
            }

        }
        else
        {
            ch2[i] = ch[i];
        }
    }
    ch2[len] = '\0';

    printf("\n--%s--\n", ch2);
    printf("++%s++\n", ch);

    free(ch2);
}
