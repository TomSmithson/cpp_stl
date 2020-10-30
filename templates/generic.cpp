#include <iostream>
#include <string>

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

struct Person {
	std::string name;
	int age;
	bool operator>(const Person &rhs) const {
		return this->age < rhs.age;
	}
};

int main() {
	int a = 1;
	int b = 10;
	std::cout << max<int>(a, b) << std::endl;

	char x {'A'};
	char y {'B'};
	std::cout << max<char>(x, y) << std::endl;

	func<int, double>(1, 1.0);

	Person p1 {"Curly", 50};
	Person p2 {"Moe", 55};

	Person p3 = max(p1, p2);
	std::cout << p3.name << " is younger" << std::endl;
}
