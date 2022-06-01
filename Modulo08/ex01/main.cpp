/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:13:55 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/01 20:19:59 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	Span	sp1;
	Span	sp2(5);
	// std::cout << *sp1.getList().begin() << std::endl;
	std::cout << *sp2.getList().begin() << std::endl;
	return 0;
}
