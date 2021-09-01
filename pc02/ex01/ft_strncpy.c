/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:21:55 by asougrat          #+#    #+#             */
/*   Updated: 2021/08/15 09:59:33 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}	
	 return (dest);
}
/*
int main()
{
	char a[10]="hello";
	char b[10]="abcd";
	printf("%s\n",a);
    printf("%s\n",b);
	ft_strncpy(b,a,3);
	printf("%s\n",a);
	printf("%s\n",b);

}*/
