/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:33:55 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/27 18:20:28 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	Karen	k;

	if (argc == 2)
		k.complain(argv[1]);
	else
		std::cout << "Error : wrong number of arguments." << std::endl;
	return 0;
}
