#include "libft.h"

int main()
{
    int filedescriptor;

    filedescriptor = 1;

    ft_putstr_fd("file descriptor = 1", filedescriptor);
    write(filedescriptor, "\n", 1);
    ft_putstr_fd("file descriptor = 2", 2);
    write(2, "\n", 1);
    return (0);
}