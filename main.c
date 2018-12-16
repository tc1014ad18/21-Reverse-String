#include <stdio.h>
#include <memory.h>

int main( )
{
    char string[1000];
    printf("Hullo, Mate!\nGive me a string and I'll give it to you backwards.\n");
    printf("Your string (it should not pass of 1000 chars): ");

    fgets(string, sizeof(string), stdin);

    for (int i = strlen(string); i <= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n\nThere's your string backwards, mate! See you around.\n");

    return 0;
}
