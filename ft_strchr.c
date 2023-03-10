/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irakraki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:46:27 by irakraki          #+#    #+#             */
/*   Updated: 2022/11/18 18:39:56 by irakraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*
int	main()
{
	const char *s;
	const char *t;
	char *u;
	char *v;
	s = ft_strchr("hello", 'h');
	t = strchr("hello", 'h');
	printf(" %s\n", s);
	printf(" %s\n", t);
	u = ft_strchr("hello", 'z');
	v = strchr("hello", 'z');
	printf(" %s\n", u);
	printf(" %s\n", v);
	return (0);
}*/
