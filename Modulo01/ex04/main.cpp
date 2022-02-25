/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:56:47 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/25 13:46:46 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string	ft_getnameout(std::string name)
{
	size_t		findpos;
	std::string	nameout;

	findpos = name.find('.');
	if (findpos == (size_t)-1)
		nameout.append(name);
	else
		nameout = name.substr(0, findpos);
	nameout.append(".replace");
	std::cout << "nameout : " << nameout << std::endl;
	return (nameout);
}

int	main(int argc, char const *argv[])
{
	std::fstream	fdin;
	std::fstream	fdout;
	std::string		cadena;
	std::string		nameout;

	if (argc == 4)
	{
		fdin.open("test.txt", std::fstream::in);
		if (!fdin)
			std::cout << "Error de lectura." << std::endl;
		else
		{
			nameout = ft_getnameout(argv[1]);
			fdout.open(nameout, std::fstream::out);
			if (!fdout)
				std::cout << "Error de creacion." << std::endl;
			else
			{
				while (!fdin.eof())
				{
					fdin >> cadena;
					if (!cadena.compare(argv[2]))
						fdout << argv[3] << " ";
					else
						fdout << cadena << " ";
				}
				fdout << std::endl;
			}
		}
	}
	else
		std::cout << "Inclorrect number of arguments." << std::endl;
	fdin.close();
	fdout.close();
	return 0;
}
