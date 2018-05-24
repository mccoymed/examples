// HelloWindows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>


int main()
{
	std::cout << "starting hello windows\n";
	std::ifstream ifs("/envoyai/input/name");
	std::string content((std::istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>()));
	std::ofstream out("/envoyai/output/hello");
	std::cout << "read " + content + "\n";
	out << content + ", come with me if you want to live (in windows).";
	out.close();
	std::cout << "ending hello windows\n";

	return 0;
}

