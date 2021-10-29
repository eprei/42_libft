#include "libft.h"

int main()
{
    int filedescriptor;

    filedescriptor = 1;

    ft_putstr_fd("file descriptor = 1", filedescriptor);
    ft_putstr_fd("file descriptor = 2", 2);
    return (0);
}