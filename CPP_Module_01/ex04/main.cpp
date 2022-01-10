/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:51:11 by soooh             #+#    #+#             */
/*   Updated: 2022/01/10 21:40:06 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string buf;

	if (argc != 4)
		return (0);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream fin(filename);
	//파일 연결
	if (fin.fail())
	{
		std::cerr << "Error: No '" << filename << "' found" << std::endl;
		return (1);
	}
	while (!fin.eof())
	{
		std::string temp;
		fin >> temp;
		if (!fin.eof())
			temp += "\n";
		buf += temp;
	}
	//string 타입으로 보내고, 파일 끝까지 읽은 뒤 개행 추가
	int index;
	while (buf.find(s1) != std::string::npos)
	{
		index = buf.find(s1);
		buf.erase(index, s1.length());
		//s1지우고
		buf.insert(index, s2);
		//s2넣기
	}
	//string :: npos는 -1 값을 가지는 상수
	std::ofstream fout(filename + ".replace");
	fout << buf;
	return 0;
}