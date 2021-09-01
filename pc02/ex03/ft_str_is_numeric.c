/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:11:46 by asougrat          #+#    #+#             */
/*   Updated: 2021/08/15 11:26:22 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	 return (1);
}
/*
int main(void)
{
	printf("%d",ft_str_is_numeric("ndjndj"));
}*/
