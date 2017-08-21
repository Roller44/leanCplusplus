#include <string>

using std::string;

#ifndef PERSON
#define PERSON
struct Person
{
    string Name;
    string Address;

    string name() const
    {
        return Name;
    }

    string address() const
    {
        return address;
    }
};

std::istream& read(std::istream& is, Person& item)
{
	is >> item.Name >> item.address;
	return is;
}

std::ostream& print(std::ostream& os, const Person& item)
{
	os << item.Name << " " << item.address << std::endl;
	return os;
}

#endif
