#include <iostream>

// generic programming (macros)
// marcos are not good
// #define MAX(a, b) ((a > b) ? a : b)

// templates should be used


template <typename T> // "typename" could be "class"
T max (T a, T b) {
	return (a > b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b) {
	std::cout << a << " : " << b << std::endl;
}

template <typename T>
void func2(T a, T b);

int main() {
	int a = 1;
	int b = 10;
	std::cout << max<int>(a, b) << std::endl;

	char x {'A'};
	char y {'B'};
	std::cout << max<char>(x, y) << std::endl;

	func<int, double>(1, 1.0);

	func2<int>(1, 1);
	func2<char>('a', 'b');
}

template <typename T>
void func2(T a, T b) {
	if (a == b) {
		std::cout << "They are the same" << std::endl;
	} else {
		std::cout << "They are not the same" << std::endl;
	}
}