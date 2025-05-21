#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <chrono>
int main(void) 
{
	auto now = std::chrono::system_clock::now();
	std::time_t now_c = std::chrono::system_clock::to_time_t(now);
	std::cout << std::ctime(&now_c) << std::endl;
}