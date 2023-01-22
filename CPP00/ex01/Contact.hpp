/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:45:07 by otoufah           #+#    #+#             */
/*   Updated: 2023/01/18 15:45:09 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        std::string GetFirst_name();
        std::string GetLastName();
        std::string GetNickname();
        std::string GetPhoneNumber();
        std::string GetDarkestSecret();
        void        SetFirst_name(std::string FirstName);
        void        SetLastName(std::string LastName);
        void        SetNickname(std::string Nickname);
        void        SetPhoneNumber(std::string PhoneNumber);
        void        SetDarkestSecret(std::string DarkestSecret);
};      


#endif
