/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:59:07 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/08 09:59:53 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac == 1)
        std ::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std ::endl;
    else
    {
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
            {
                std ::cout << (char)std::toupper(av[i][j]);
                j++;
            }
            i++;
        }
        std ::cout << std ::endl;
    }
}
