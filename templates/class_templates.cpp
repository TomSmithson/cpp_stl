#include <string>
#include <vector>


template <typename T>
class Item {
private:
	std::string name;
	T value;
public:
	Item(std::string name, T value)
		: name{name}, value{value}
	{}
	std::string get_name() const {return name;}
	T get_value() const {return value;}
};


template <typename T1, typename T2>
struct My_Pair {
	T1 first;
	T2 second;
}

int main() {
	Item<int> item1 {"larry", 1};
	Item<double> item2 {"House", 1000.0};
	Item<std::string> item3 {"Frank", "Boss"};
	std::vector<Item<int>> vec;
}