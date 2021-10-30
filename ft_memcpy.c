#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char*) dst;
    ptr2 = (unsigned char *) src;

    while (n > 0)
    {
        *ptr1++ = *ptr2++;
        n--;
    }
    return (dst);
}