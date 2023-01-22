/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:03:44 by otoufah           #+#    #+#             */
/*   Updated: 2023/01/22 13:03:45 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

/* **************************************************************************
                                Getters                                                       
************************************************************************** */

std::string Contact::GetFirst_name()
{
    return (this->FirstName);
}
std::string Contact::GetLastName()
{
    return (this->LastName);
}
std::string Contact::GetNickname()
{
    return (this->Nickname);
}
std::string Contact::GetPhoneNumber()
{
    return (this->PhoneNumber);
}
std::string Contact::GetDarkestSecret()
{
    return (this->DarkestSecret);
}

/* **************************************************************************
                                Setters                                                       
************************************************************************** */

void Contact::SetFirst_name(std::string FirstName)
{
    this->FirstName = FirstName;
}
void Contact::SetLastName(std::string LastName)
{
    this->LastName = LastName;
}
void Contact::SetNickname(std::string Nickname)
{
    this->Nickname = Nickname;
}
void Contact::SetPhoneNumber(std::string PhoneNumber)
{
    this->PhoneNumber = PhoneNumber;
}
void Contact::SetDarkestSecret(std::string DarkestSecret)
{
    this->DarkestSecret = DarkestSecret;
}
