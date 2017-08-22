#include <string>

using std::string;

#ifndef PERSON
#define PERSON

struct Person;
std::istream& read(std::istream&, Person&);

struct Person
{
    string Name;
    string Address;
	// constructor
	Person(const std::string& n, const std::string& a): Name(n), Address(a) { }	
	Person(std::istream& is)

    string name() const
    {
        return Name;
    }

    string address() const
    {
        return address;
    }
};
// constructor
Person::Person(std::istream &is)
{
	read(is, *this);
}

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
