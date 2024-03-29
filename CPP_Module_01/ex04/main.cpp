/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:51:11 by soooh             #+#    #+#             */
/*   Updated: 2022/02/04 02:27:13 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replacestring(std::string line, std::string &rtr, std::string s1, std::string s2)
{
	std::size_t	pos = 0;
	
	pos = line.find(s1, pos);
	if (pos != 0)
		rtr.append(line, 0, pos);
	rtr.append(s2);
	pos += s1.length();
	line.erase(0, pos);
	if (line.find(s1) == std::string::npos)
	{
		rtr.append(line);
		return ;
	}
	else
		replacestring(line, rtr, s1, s2);
}

int	main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string line;
	std::string rtr;
	size_t		start_pos = 0;

	if (argc != 4)
		return (0);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream fin(filename);
	std::ofstream fout(filename + ".replace");
	//파일 연결
	if (fin.fail())
	{
		std::cerr << "Error: No '" << filename << "' found" << std::endl;
		return (1);
	}	
	while (!fin.eof())
	{
		std::getline(fin, line);
		if (line.find(s1, start_pos) == std::string::npos)
			fout << line;
		else
		{
			replacestring(line, rtr, s1, s2);
			fout << rtr;
			rtr.clear();
		}
		if (!fin.eof())
			fout << std::endl;
	}
	return 0;
}