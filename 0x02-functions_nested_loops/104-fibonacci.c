#include <stdio.h>
#include <string.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char t1[1000] = "1", t2[1000] = "2", next[1000];
    int i, j, len1, len2, carry;

    printf("%s, %s", t1, t2);
    for (i = 3; i <= 98; i++)
    {
        len1 = strlen(t1);
        len2 = strlen(t2);
        carry = 0;
        for (j = 1; j <= len2; j++)
        {
            next[len2 - j] = ((t1[len1 - j] - '0' + t2[len2 - j] - '0' + carry) % 10) + '0';
            carry = (t1[len1 - j] - '0' + t2[len2 - j] - '0' + carry) / 10;
        }
        for (; j <= len1; j++)
        {
            next[len1 - j] = ((t1[len1 - j] - '0' + carry) % 10) + '0';
            carry = (t1[len1 - j] - '0' + carry) / 10;
        }
        if (carry > 0)
        {
            next[len1] = carry + '0';
            next[len1 + 1] = '\0';
            strcpy(t1, t2);
            strcpy(t2, next + len1);
        }
        else
        {
            next[len1] = '\0';
            strcpy(t1, t2);
            strcpy(t2, next + len1 - 1);
        }
        printf(", %s", t2);
    }
    printf("\n");

    return (0);
}
