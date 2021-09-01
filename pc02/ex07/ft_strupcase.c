/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:17:58 by asougrat          #+#    #+#             */
/*   Updated: 2021/08/15 11:44:03 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int main(int ac, char *av[])
{
	char *s1 = av[1];
	printf("%s",ft_strupcase(s1));
}*/
