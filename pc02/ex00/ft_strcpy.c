/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:12:39 by asougrat          #+#    #+#             */
/*   Updated: 2021/08/15 13:41:20 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	 int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main ()
{
  char a[5]="one";
  char b[5]="two";
  printf("%s\n",a);
   printf("%s\n",b);
   //affchage avant la fonction
  ft_strcpy(b,a);
  //affchage apres la fonction
    printf("%s\n",a);
    printf("%s",b);
}*/
