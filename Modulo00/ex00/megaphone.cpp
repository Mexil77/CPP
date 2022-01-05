/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:08:05 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/05 16:05:21 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	size_t		i;
	size_t		j;
	std::string str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (++i < (size_t)argc)
	{
		str = argv[i];
		j = -1;
		while (++j < str.length())
			if (argv[i][j] > 96 && argv[i][j] < 123)
				str.replace(j, 1, 1, argv[i][j] - 32);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
