/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:46:14 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/11/14 20:54:24 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns 0 if str is number
int	ft_str_is_nbr(const char *str)
{
	int	i;

	if (!str || str[0] == '\0')
		return (-1);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *str = "asdf";
	printf("%d\n", ft_str_is_nbr(str));
	return (0);
}*/
