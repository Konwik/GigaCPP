//prints current time using chrono

#include <iostream>
#include <chrono>
#include <ctime>

int main(){
	auto now =std::chrono::system_clock::now();
	std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
	std::cout << std::ctime(&currentTime);
	return 0;
}
