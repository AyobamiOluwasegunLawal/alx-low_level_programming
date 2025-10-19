#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sum = 0;
    char c;

    srand(time(NULL));

    while (sum < 2772 - 126) // 126 is '~', the last printable ASCII
    {
        c = rand() % 94 + 33; // printable ASCII range (33–126)
        printf("%c", c);
        sum += c;
    }

    // last character to make sum exactly 2772
    printf("%c\n", 2772 - sum);
    return 0;
}

