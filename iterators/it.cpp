#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void display(const std::vector<int> &vec) {
	std::cout << "[";
	for (auto const&i : vec)
		std::cout << i << " ";
	std::cout << "]" << std::endl;
}

void test1() {
	// End of vectors is always after the last element by one space. Hence vec.end() - 1.
	std::cout << "\n=================================================" << std::endl;
	std::vector<int> nums1 {1, 2, 3, 4, 5};
	auto it = nums1.begin(); // Points to 1
	std::cout << *it << std::endl;

	it++; // Poinst to 2
	std::cout << *it << std::endl;

	it += 2; // Points to 4
	std::cout << *it << std::endl;

	it--; // Points to 3
	std::cout << *it << std::endl;

	it = nums1.end() - 1; // Points to 5
	std::cout << *it << std::endl;
}

void test2() {
	std::vector<int> nums1 {1, 2, 3, 4, 5};
	std::vector<int>::iterator it = nums1.begin();
	while (it != nums1.end()) {
		std::cout << *it << std::endl;
		it++;
	}

	// change all vector elements to 0
	it = nums1.begin();
	while (it != nums1.end()) {
		*it = 0;
		it++;
	}

	display(nums1);
}

void test3() {
	std::vector<int> nums1 {1, 2, 3, 4, 5};
	std::vector<int>::const_iterator it = nums1.begin();
	// auto it = nums1.cbegin();

	while (it != nums1.end()) {
		std::cout << *it << std::endl;
		it++;
	}

	it = nums1.begin();
	while (it != nums1.end()) {
		// *it = 0; // compliation error - read only (constant)
		it++;
	}
}

void test4() {
	std::vector<int> vec {1, 2, 3, 4, 5};
	auto it = vec.rbegin();
	while (it != vec.rend()) {
		std::cout << *it << std::endl;
		it++;
	}

	std::map<std::string, std::string> favs = {
		{"Frank", "C++"},
		{"Bill", "Java"},
		{"James", "Haskell"}
	};
	auto it2 = favs.begin();
	while (it2 != favs.end()) {
		std::cout << it2->first << " : " << it2->second << std::endl;
		it2++;
	}
}

int main() {
	// test1();
	// test2();
	// test3();
	test4();
}