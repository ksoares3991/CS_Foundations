/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksn_psum2n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <kasoares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 08:29:28 by kasoares          #+#    #+#             */
/*   Updated: 2026/04/28 08:35:05 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;
	int	sum;

	n1 = scanf("Give me the 1st number: \n");
	n2 = scanf("Give me the 2nd number: \n");
	sum = ksn_fsum2n(n1, n2);
	printf("The sum is: %i \n", sum);
	return (0);
}
