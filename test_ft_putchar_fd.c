#include "libft.h"

int main()
{
    int filedescriptor;

    filedescriptor = 1;

    ft_putchar_fd('1', filedescriptor);
    ft_putchar_fd('2', 2);
    return (0);
}