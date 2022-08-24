/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:03:28 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/22 17:43:38 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (islower(argv[i][j]))
					std::cout << (char)toupper(argv[i][j]);
				else
					std::cout << argv[i][j];
				j++;
			}
			i++;
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
