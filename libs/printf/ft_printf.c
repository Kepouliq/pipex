/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:50:17 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/25 17:17:18 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char c, va_list args)
{
	if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (c == 's')
		return (put_str(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (put_int(va_arg(args, int)));
	else if (c == 'x')
		return (put_hexabase(va_arg(args, int), "0123456789abcdef"));
	else if (c == 'X')
		return (put_hexabase(va_arg(args, int), "0123456789ABCDEF"));
	else if (c == 'u')
		return (put_unsigne(va_arg(args, int)));
	else if (c == 'p')
		return (put_ptr(va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length_return;
	va_list	args;

	if (!str)
		return (-1);
	i = 0;
	length_return = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			length_return += check_format(str[i], args);
		}
		else
			length_return += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (length_return);
}

//------------------------------------------------------------------------

	//TEST POUR %C

/*int main()
{
	char c = 'c';
	printf("%d\n", ft_printf(" cc%"));
	printf("%d\n", printf(" cc%"));
	return (0);
}*/

//------------------------------------------------------------------------
/*
	//TEST POUR %%

int main()
{
	ft_printf("%%\n");
	printf("%%\n");
	return(0);
}*/

//------------------------------------------------------------------------
/*
	//TEST POUR %s

int main()
{
	char *str = "kelian test 123456 .,,']3875y super";
	printf("%d\n", ft_printf("%s\n",str));
	
	printf("%d\n", printf("%s\n", str));
	return (0);
}*/

//------------------------------------------------------------------------
/*
	//TEST POUR %d

int main()
{
	int test = INT_MIN;
	printf("%d\n", ft_printf("%d",test));
	
	printf("%d\n", printf("%d", test));
	return (0);
}*/
//------------------------------------------------------------------------
/*
	//TEST POUR %x && %X

int main()
{
	long long test = 1;
	
	printf("%d\n", ft_printf("%x\n",test));
	
	printf("%d\n", printf("%x\n", test));

	printf("%d\n", ft_printf("%X\n",test));
	
	printf("%d\n", printf("%X\n", test));
	return (0);
}
*/

//------------------------------------------------------------------------
/*
	//TEST POUR %u

int main()
{
	int test = INT_MIN;
	
	printf("%d\n", ft_printf("%u\n",test));
	
	printf("%d\n", printf("%u\n", test));
	return (0);
}
*/

//------------------------------------------------------------------------
/*
	//TEST POUR %u

int main()	if (!str)
		return (-1);
{
	unsigned long nb = LONG_MAX;
	unsigned long *ptr = &nb;
	
	printf("%d\n", ft_printf("%p\n",ptr));
	
	printf("%d\n", printf("%p\n", ptr));
	return (0);
}
*/
/*
int main()
{
	printf("%d", ft_printf(NULL));
	printf("%d", printf(NULL));
	return(0);
}*/