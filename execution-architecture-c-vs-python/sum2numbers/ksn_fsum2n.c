/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksn_fsum2n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <kasoares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 08:05:32 by kasoares          #+#    #+#             */
/*   Updated: 2026/04/28 08:46:56 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ksn_fsum2n(int n1, int n2)
{
	int	sum;

	sum = n1 + n2;
	return (sum);
}

int	main(void)
{
	int	n1;
	int	n2;
	int	sum;

	printf("Type the 1st number: \n");
	scanf("%d", &n1);
	printf("Type the 2nd number: \n");
	scanf("%d", &n2);
	sum = ksn_fsum2n(n1, n2);
	printf("The sum is: %i \n", sum);
	return (0);
}
