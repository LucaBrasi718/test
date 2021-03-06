/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 17:06:14 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/20 23:21:00 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char *argv[])
{
	int num1;
	int num2;
	int delimetr;
	int m;

	delimetr = 1;
	if(argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		while(delimetr <= num1 && delimetr <= num2)
		{
			if(num1 % delimetr == 0 && num2 % delimetr == 0)
				m = delimetr;
			delimetr++;
		}
		printf("%d", m);
	}
	printf("\n");
	return (0);
}
