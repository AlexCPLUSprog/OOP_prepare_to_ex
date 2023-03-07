#include<iostream>
#include<algorithm>
#include<vector>
#include "A.h"
#include "B.h"

bool pred(int a, int b) {
	return a > b;
}

template <typename ... Types>
class MyClass {
public:
	void print_all(Types... args) {
		std::cout << sizeof...(Types) << '\n';
		(std::cout << ... << args) << '\n';
	}
};

// запрет на копирование
class Classic {
public:
	void operator=(Classic& other) = delete;	
	void operator=(const Classic& other) = delete;
	//void operator=(const Classic&& other) = delete;
};

int main() {

	/*std::vector<int> vec{5,4,3,7,8,0};

	for (const auto el : vec) {
		std::cout << el << " ";
	}
	std::cout << std::endl;

	std::sort(vec.begin(), vec.end(), [](int a, int b){
	return a > b;
	});

	// callback
	const auto x = [](int a) {
		std::cout << a << std::endl;
	};

	x(4);

	// sort
	for (const auto el : vec) {
		std::cout << el << " ";
	}
	std::cout << std::endl;*/

	// двумерный массив из STL контейнеров
	/*std::vector<std::vector<int>> vec{ {1,2,3}, {4,5,6} };
	
	for (size_t i = 0; i < vec.size(); i++) {
		for (size_t j = 0; j < vec[i].size(); j++) {
			std::cout << vec[i][j] << " ";
		}
		std::cout << std::endl;
	}*/
	
	// стратегия, pimpl, singleton - антипаттерн


}
