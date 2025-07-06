#include "libft.h"

static void	skip_spaces(const char **str)
{
	while (**str == ' ' || (**str >= '\t' && **str <= '\r'))
		(*str)++;
}

static void	set_sign(const char **str, int *sign)
{
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			*sign = -1;
		(*str)++;
	}
}

int	ft_atoi(const char *str, int *out)
{
	long	num;
	int		sign;
	long	snum;

	num = 0;
	sign = 1;
	if (!str || !*str)
		return (0);
	skip_spaces(&str);
	set_sign(&str, &sign);
	if (!ft_isdigit(*str))
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		num = num * 10 + (*str - '0');
		snum = -num;
		if ((sign == 1 && num > INT_MAX) || (sign == -1 && snum < INT_MIN))
			return (0);
		str++;
	}
	*out = (int)(num * sign);
	return (1);
}
