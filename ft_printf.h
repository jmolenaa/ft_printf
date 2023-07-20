/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 10:07:58 by jmolenaa      #+#    #+#                 */
/*   Updated: 2022/11/09 15:05:12 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/src/libft.h"

typedef struct s_string
{
	char	*converstr;
	char	*flagstr;
}			t_string;

typedef struct s_flags
{
	int	minusflag;
	int	zeroflag;
	int	poundflag;
	int	spaceflag;
	int	plusflag;
	int	width;
	int	prec;
}		t_flags;

typedef struct s_sign
{
	int		is;
	char	sign;
}			t_sign;

int			ft_printf(const char *s, ...);
t_string	setmainstrings(void);
int			validateinputnormal(char const *s, t_string main);
int			looptillpercentsign(const char *s, int i);
void		setflagsnothing(t_flags *f);
char		*makeargumentstr(const char *s, int i, va_list ap, t_flags *f);
int			settingflags(t_string main, t_flags *f, int i, const char *s);
void		settingsign(t_flags *f, int dec, t_sign *s);
char		*itoabase(long unsigned int nbr, char *base, int sign);
int			validateinput(char const *s, t_string main, t_flags *f);
int			checkifzeroflagvalid(int i, const char *s, t_flags *f);
int			checkifpoundflagvalid(int i, const char *s, t_flags *f);
int			checkifspaceandplusflagvalid(int i, const char *s, t_flags *f);
int			checkifprecisionflagvalid(int i, const char *s, t_flags *f);
int			validatemultipleflags(t_flags *f);
char		*conversiontochar(va_list ap, t_flags *f);
char		*conversiontostring(va_list ap, t_flags *f);
char		*conversiontopointer(va_list ap, t_flags *f);
char		*conversiontodecimal(va_list ap, t_flags *f);
char		*conversiontounsigned(va_list ap, t_flags *f);
char		*conversiontohexa(va_list ap, t_flags *f, char c);
char		*conversiontopercent(t_flags *f);

#endif