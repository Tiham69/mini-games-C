#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char* ch;
    int len;


    scanf("%[^\n]%*c", &*ch);

    len = strlen(ch);

    char* ch2 = (char*) malloc(sizeof(char) *(len + 1));

    printf("%d %s\n", len, ch); //error handle

    for(int i = len - 1; i >= 0; i--)
    {
        int x = len - 1;

        ch2[x - i] = ch[i];

        //printf("%d %c\n", (len - i), ch2[len - i]); // here error finding dosen't work. it only shows garbage value
        //printf("%d %c \n", i, ch[i]);
    }

    ch2[len] = '\0'; // the nth or len is the final blocker

    printf("%s <-> %s", ch, ch2);

    free(ch2);

}
