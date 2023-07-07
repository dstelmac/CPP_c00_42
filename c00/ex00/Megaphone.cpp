/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:33:21 by dstelmac          #+#    #+#             */
/*   Updated: 2023/07/03 19:33:22 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;

	if (argc < 2)
		std::cout<<"* LOUD ANND UNDEARABLE FEEDBACK NOISE *"<<std::endl;
	while (argc && argv [i])
	{
		j = 0;
		while (argv[i][j])
		{	
			std::cout <<(char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}

	std::cout<<std::endl;
	return (0);
}	