#include "./PhoneBook.hpp"

// By initializing these variables to 0, the PhoneBook class is ready to start tracking contacts as soon as it is created.

PhoneBook::PhoneBook()
{
    idx = 0;
    current_contact = 0;
};