/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:01:03 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/14 02:22:59 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int j;

	a = 0;
	j = 0;
	while (dest[a])
		a++;
	while (src[j])
	{
		dest[a] = src[j];
		a++;
		j++;
	}
	dest[a] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100] = "teste ", str2[] = "testando";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
	ft_strcat(str1, str2);
	puts(str1);
	puts(str2);

   return 0;
}
