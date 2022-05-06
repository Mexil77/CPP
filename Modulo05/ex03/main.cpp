/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:29:24 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/06 16:20:02 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern	someRandom;
	Form*	scf;
	Form*	rrf;
	Form*	ppf;
	Form*	fake;

	try
	{
		scf = someRandom.makeForm("shrubbery creation", "House");
		rrf = someRandom.makeForm("robotomy request", "Bender");
		ppf = someRandom.makeForm("presidential pardon", "Criminal");
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		delete scf;
		delete rrf;
		delete ppf;
		fake = someRandom.makeForm("sdfkj", "Fake");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
