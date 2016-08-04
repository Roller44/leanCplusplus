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
#endif
