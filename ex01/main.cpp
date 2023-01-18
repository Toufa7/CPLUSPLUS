/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:45:16 by otoufah           #+#    #+#             */
/*   Updated: 2023/01/18 15:45:18 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

class Contact
{
    private:
        std::string  FirstName;
        std::string  LastName;
        std::string  Nickname;
        std::string  PhoneNumber;
        std::string  DarkestSecret;
    public:
    // All of this membre functions are called getter they return pointer to the memory address of privates membre variables
        std::string *GetFirst_name()
        {
            return (&this->FirstName);
        }
        std::string *GetLastName()
        {
            return (&this->LastName);
        }
        std::string *GetNickname()
        {
            return (&this->Nickname);
        }
        std::string *GetPhoneNumber()
        {
            return (&this->PhoneNumber);
        }
        std::string *GetDarkestSecret()
        {
            return (&this->DarkestSecret);
        }
};

class PhoneBook
{
    // By initializing these variables to 0, the PhoneBook class is ready to start tracking contacts as soon as it is created.
    private:
        Contact nokia[8];
        // a variable which keeps track of the number of contacts stored in the 'nokia' array
        int     idx;
        // a variable that indicates which contact is currently selected
        int     current_contact;
    public:
        PhoneBook()
        {
            idx = 0;
            current_contact = 0;
        };
        void    AddContact();
        void    SearchContact();
        void    ContactInformations();
        void    DisplayContact(int idx);
        void    Exiting();
};

int skip_whitespaces(std::string    str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!std::isspace(str[i]))
        {
            return (1);
        }
    }
    return (0);
}

void    PhoneBook::ContactInformations()
{
    // looping over the object array and calls the membre function of that class to get 
    // their values and display them as a table
    std::cout << " ─────────────────────────────────────────── \n";
    std::cout << "|       Idx|" <<  " FirstName|" << "  LastName|" << "  Nickname|\n";
    std::cout << "+──────────+──────────+──────────+──────────+\n";
    for (int i = 0; i < this->idx ; i++)
    {
        std::cout <<    "|" << std::setw(10)    <<  i;
        if (this->nokia[i].GetFirst_name()->length() > 10)
        {
            std::cout <<    "|" <<  this->nokia[i].GetFirst_name()->substr(0, 9);
            std::cout << ".";
        }
        else
            std::cout <<    "|" << std::setw(10)    <<  *this->nokia[i].GetFirst_name();
        if (this->nokia[i].GetLastName()->length() > 10)
        {
            std::cout <<    "|" <<  this->nokia[i].GetLastName()->substr(0, 9);
            std::cout << ".";
        }
        else
            std::cout <<    "|" << std::setw(10)    <<  *this->nokia[i].GetLastName();
        if (this->nokia[i].GetNickname()->length() > 10)
        {
            std::cout <<    "|" <<  this->nokia[i].GetNickname()->substr(0, 9);
            std::cout << ".";
        }
        else
            std::cout <<    "|" << std::setw(10)    <<  *this->nokia[i].GetNickname();
        std::cout << "|\n+───────────────────────────────────────────+\n";
    }
}

void    PhoneBook::DisplayContact(int idx)
{
    std::cout << "1) First Name : " << *this->nokia[idx].GetFirst_name() << std::endl;
    std::cout << "2) Last Name : " <<  *this->nokia[idx].GetLastName() << std::endl;
    std::cout << "3) Nickname : " << *this->nokia[idx].GetNickname() << std::endl;
    std::cout << "4) Phone Number : " << *this->nokia[idx].GetPhoneNumber() << std::endl;
    std::cout << "5) Darkest Secret : " << *this->nokia[idx].GetDarkestSecret() << std::endl;
}

void    PhoneBook::AddContact()
{
    std::cout << "1) First Name : ";
    std::getline(std::cin, *this->nokia[this->current_contact].GetFirst_name());
    // this loop checks if the input just a whitespace it will show a msg and get the input again (Until a valid input)
    // (skip_whitespaces) a helper function takes a string and checks if it contains whitespace else it return 1 so it's valid
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetFirst_name()))
    {
        std::cout << "Empty field !\n";
        std::getline(std::cin, *this->nokia[this->current_contact].GetFirst_name());
    }
    std::cout << "2) Last Name : ";
    std::getline(std::cin, *this->nokia[this->current_contact].GetLastName());
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetLastName()))
        std::getline(std::cin, *this->nokia[this->current_contact].GetLastName());
    std::cout << "3) Nickname : ";
    std::getline(std::cin, *this->nokia[this->current_contact].GetNickname()); 
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetNickname()))
        std::getline(std::cin, *this->nokia[this->current_contact].GetNickname());
    std::cout << "4) Phone Number : ";
    std::getline(std::cin, *this->nokia[this->current_contact].GetPhoneNumber()); 
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetPhoneNumber()))
        std::getline(std::cin, *this->nokia[this->current_contact].GetPhoneNumber());
    std::cout << "5) Darkest Secret : ";
    std::getline(std::cin,  *this->nokia[this->current_contact].GetDarkestSecret());
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetDarkestSecret()))
        std::getline(std::cin, *this->nokia[this->current_contact].GetDarkestSecret());
    current_contact = (current_contact + 1) % 8;
    std::cout << "      Contact has been successfully created \n";
    if (idx < 8)
        idx++;
}

int    is_number(std::string choice)
{
    if (choice.length() == 1 && choice[0] >= '0' && choice[0] <= '9')
        return (choice[0] - 48);
    else
        return (-1);
}

void    PhoneBook::SearchContact()
{
    std::string choice;
    int         nbr;

    if (this->idx == 0)
    {
        std::cout << "Actually no contact here ..."  << std::endl;
        return ;
    }
    ContactInformations();
    std::cout << "Who's you're looking for : "  <<  std::endl;
    std::cout << "Currenlty You Have : "        <<  this->idx <<std::endl;

    std::getline(std::cin,choice);
    nbr = is_number(choice);
    if (nbr >= 0 && nbr <= this->idx)
    {
        DisplayContact(nbr);
    }
    else
        std::cout << "Out of the boundry !"  << std::endl;
}

int main()
{
    PhoneBook   phone;
    std::string choice;
    
    std::cout << "              Welcome to your awesome phonebook\n";
    std::cout << "Usage\n";
    std::cout << "      ADD\n";
    std::cout << "      SEARCH\n";
    std::cout << "      EXIT\n";
    while (std::getline(std::cin, choice))
    {
        if (choice == "ADD")
            phone.AddContact();
        else if (choice == "SEARCH")
            phone.SearchContact();
        else if (choice == "EXIT")
            break ;
        else
        {
            std::cout << "[" << choice << "]" << ": Unknown Command\n";
            std::cout << "Please select one of the down commands [UPPERCASE]\n";
        }
        std::cout << "      ADD\n";
        std::cout << "      SEARCH\n";
        std::cout << "      Exit\n";
    }
    return (0);
}
