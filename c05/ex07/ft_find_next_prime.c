/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:21:21 by asougrat          #+#    #+#             */
/*   Updated: 2021/08/23 19:42:53 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_long_prime(long int nb)
{
	long	i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)	
{
    while (ft_is_long_prime (nb)  ==  0)
    {
        nb++;
    }
    return (nb);
}
