#include "libft.h"

int main()
{
    int filedescriptor;

    filedescriptor = 1;

    ft_putendl_fd("file descriptor = 1", filedescriptor);
    ft_putendl_fd("file descriptor = 2", 2);
    return (0);
}