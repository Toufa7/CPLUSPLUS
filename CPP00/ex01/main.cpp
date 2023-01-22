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

#include "./Contact.hpp"
#include "./PhoneBook.hpp"

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

int    is_number(std::string choice)
{
    if (choice.length() == 1 && choice[0] >= '0' && choice[0] <= '8')
        return (choice[0] - 48);
    else
        return (-1);
}


/* **************************************************************************
    looping over the object array and calls the membre function of that class
        to get their values and display them as a table                                                            
************************************************************************** */

void    PhoneBook::ContactInformations()
{
    // 
    std::cout << " ─────────────────────────────────────────── \n";
    std::cout << "|       Idx|" <<  " FirstName|" << "  LastName|" << "  Nickname|\n";
    std::cout << "+──────────+──────────+──────────+──────────+\n";
    for (int i = 0; i < idx ; i++)
    {
        std::cout <<    "|" << std::setw(10)    <<  i;

        if (nokia[i].GetFirst_name().length() > 10)
        {
            std::cout <<    "|" <<  nokia[i].GetFirst_name().substr(0, 9);
            std::cout << ".";
        }
        else
            std::cout <<    "|" << std::setw(10)    <<  nokia[i].GetFirst_name();
        if (nokia[i].GetLastName().length() > 10)
        {
            std::cout <<    "|" <<  nokia[i].GetLastName().substr(0, 9);
            std::cout << ".";
        }
        else
            std::cout <<    "|" << std::setw(10)    <<  nokia[i].GetLastName();
        if (nokia[i].GetNickname().length() > 10)
        {
            std::cout <<    "|" <<  nokia[i].GetNickname().substr(0, 9);
            std::cout << ".";
        }
        else
            std::cout <<    "|" << std::setw(10)    <<  nokia[i].GetNickname();
        std::cout << "|\n+───────────────────────────────────────────+\n";
    }
}

void    PhoneBook::DisplayContact(int idx)
{
    std::cout << "1) First Name : " << nokia[idx].GetFirst_name() << std::endl;
    std::cout << "2) Last Name : " <<  nokia[idx].GetLastName() << std::endl;
    std::cout << "3) Nickname : " << nokia[idx].GetNickname() << std::endl;
    std::cout << "4) Phone Number : " << nokia[idx].GetPhoneNumber() << std::endl;
    std::cout << "5) Darkest Secret : " << nokia[idx].GetDarkestSecret() << std::endl;
}

// this loop checks if the input just a whitespace it will show a msg and get the input again (Until a valid input)
// (skip_whitespaces) a helper function takes a string and checks if it contains whitespace else it return 1 so it's valid

void    PhoneBook::AddContact()
{
    std::string fname;
    std::cout << "1) First Name : ";
    std::getline(std::cin, fname);
    nokia[this->current_contact].SetFirst_name(fname);
    while (!skip_whitespaces(fname))
    {
        std::cout << "Empty field !\n";
        std::getline(std::cin, fname);
    }

    std::string lname;
    std::cout << "2) Last Name : ";
    std::getline(std::cin, lname);
    nokia[this->current_contact].SetLastName(fname);
    while (!skip_whitespaces(lname))
        std::getline(std::cin, lname);
    

    std::string nname;
    std::cout << "3) Nickname : ";
    std::getline(std::cin, nname);
    nokia[this->current_contact].SetNickname(nname);
    while (!skip_whitespaces(nname))
        std::getline(std::cin, nname);

    
    std::string pnbr;
    std::cout << "4) Phone Number : ";
    nokia[this->current_contact].SetPhoneNumber(pnbr);
    std::getline(std::cin, pnbr); 
    while (!skip_whitespaces(pnbr))
        std::getline(std::cin, pnbr);

    
    std::string dsecret;
    std::cout << "5) Darkest Secret : ";
    nokia[this->current_contact].SetDarkestSecret(dsecret);
    std::getline(std::cin,  dsecret);
    while (!skip_whitespaces(dsecret))
        std::getline(std::cin, dsecret);
    

    current_contact = (current_contact + 1) % 8;
    std::cout << "      Contact been successfully created \n";
    if (idx < 8)
        idx++;
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
    if (nbr >= 0 && nbr < this->idx)
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
    
    std::string name;
    std::string *str;

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
