/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   percentconversion.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 20:44:08 by jmolenaa      #+#    #+#                 */
/*   Updated: 2022/11/04 11:07:46 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*conversiontopercent(t_flags *f)
{
	char	*argstr;

	if (f->width < 1)
		f->width = 1;
	argstr = (char *)ft_calloc(f->width + 1, sizeof(char));
	if (!argstr)
		return (NULL);
	ft_memset(argstr, ' ', f->width);
	if (f->zeroflag == 1 && f->minusflag == 0)
		ft_memset(argstr, '0', f->width);
	if (f->minusflag == 1)
		*(argstr) = '%';
	else
		*(argstr + f->width - 1) = '%';
	return (argstr);
}
