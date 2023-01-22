#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"

/* **************************************************************************
Yes, an array of objects in C++ can be treated as a container
that holds each object and its corresponding class members and functions.
Each element of the array is an instance of the class,
and can have its own state and behavior as defined by the class members and functions.
************************************************************************** */

class PhoneBook
{
    private:
        Contact nokia[8];
        // a variable which keeps track of the number of contacts stored in the 'nokia' array
        int     idx;
        // a variable that indicates which contact is currently selected
        int     current_contact;
    public:
        PhoneBook();
        void    AddContact();
        void    SearchContact();
        void    ContactInformations();
        void    DisplayContact(int idx);
        void    Exiting();
};

#endif




