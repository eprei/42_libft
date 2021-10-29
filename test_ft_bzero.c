#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

int main()
{
    char *str1 = "This is a chaine";
    char *str2 = "This is a chaine";

    printf("The chaine str1 before bzero: \t%s\n", str1);
    printf("The chaine str2 before ft_bzero: \t%s\n", str2);
    printf("str1[3] = %hhu\n", str1[3]);
    printf("str2[3] = %hhu\n", str1[3]);
  
 //   bzero(str1, 2);
 //   ft_bzero(str2, 4);
  //  printf("The chaine after bzero: \t%s\n", str1);
  //  printf("The chaine after ft_bzero: \t%s\n", str2);

    return (0);
}