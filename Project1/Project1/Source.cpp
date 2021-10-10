#include <iostream>
#include <list>
#include <iterator>

int main() 
{
	std::cout << "Hello world";
	std::cout << "I just added this from visual studio";
	std::cout << "I just added this from the command line repo";
	return 0;
}

class Book 
{
private:
	std::string name;

public:
	//getters setters in c++
	void setTitle(std::string n) 
	{
		n = name;
	}

	std::string getTitle() 
	{
		return name;
	}

	std::list<std::string> Authors;
};