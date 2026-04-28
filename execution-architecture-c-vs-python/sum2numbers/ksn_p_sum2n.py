# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ksn_p_sum2n.py                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kasoares <kasoares@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/28 08:54:18 by kasoares          #+#    #+#              #
#    Updated: 2026/04/28 09:01:10 by kasoares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#function to sum 2 numbers:
def	sum2n(n1, n2):
	sum = n1 + n2
	return sum

#main program:
n1 = int(input("Type the 1st number: "))
n2 = int(input("Type the 2nd number: "))

print("The sum is: ", sum2n(n1, n2)) 
