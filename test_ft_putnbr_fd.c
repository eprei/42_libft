#include "libft.h"

int main()
{
    int filedescriptor;

    filedescriptor = 1;

    ft_putnbr_fd(-2147483648, filedescriptor);
    write(filedescriptor, "\n", 1);
    ft_putnbr_fd(-2147483648, 2);
    write(2, "\n", 1);
    return (0);
}