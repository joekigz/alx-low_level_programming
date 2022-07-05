
#include <unistd.h>
#include <main.h>

/**
 * main - Check description
 * Description: It prints the word Main, followed by a new line.
 * Return: 0.
 */
int main(void)
{
char word[4] = "Main";
int i;

for (i = 0; i < 9; i++)
_putchar(word[i]);
_putchar('\n');

return (0);
}
