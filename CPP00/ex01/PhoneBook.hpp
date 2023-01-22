#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"

class PhoneBook
{
    private:
        // Array of Contact each element of this array is an anstance of Contact (Who has it's own class members and functions )
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
};
#endif




