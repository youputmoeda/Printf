#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *flag, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_base(ssize_t nbr, char *base);
int	ft_putnbr_aux(size_t nbr, size_t size_base, int fd, int type);
int	ft_putstr_fd(char *s, int fd);
int ft_isEqual(char c, char *str);
int ft_putAdress_fd(unsigned long addr, int fd);
void  ft_strlcpy(char *dest, const char *src, size_t size);

#endif