/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 12:28:17 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/18 14:38:35 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	writestrinbeforepercent(const char *s, int *i)
{
	int		j;
	int		ret;
	char	*str;

	j = *i;
	*i = looptillpercentsign(s, *i);
	str = ft_substr(s, j, *i - j);
	if (!str)
		return (-1);
	ret = write(1, str, ft_strlen(str));
	free(str);
	return (ret);
}

static int	writeargumentstring(t_flags *f, const char *s, int *i, va_list ap)
{
	char	*argstr;
	int		ret;

	setflagsnothing(f);
	(*i)++;
	argstr = makeargumentstr(s, *i, ap, f);
	if (!argstr)
		return (-1);
	ret = write(1, argstr, f->width);
	free(argstr);
	return (ret);
}

static int	makestr(const char *s, va_list ap, t_flags *f)
{
	int	i;
	int	ret;
	int	retcheck;

	ret = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		retcheck = writestrinbeforepercent(s, &i);
		if (retcheck == -1)
			return (-1);
		ret = ret + retcheck;
		if (*(s + i) == '\0')
			break ;
		retcheck = writeargumentstring(f, s, &i, ap);
		if (retcheck == -1)
			return (-1);
		ret = ret + retcheck;
		i++;
	}
	return (ret);
}

int	ft_printf(const char *s, ...)
{
	t_string	main;
	va_list		ap;
	t_flags		f;
	int			ret;

	main = setmainstrings();
	if (validateinputnormal(s, main))
		return (-1);
	va_start(ap, s);
	ret = makestr(s, ap, &f);
	va_end(ap);
	return (ret);
}
