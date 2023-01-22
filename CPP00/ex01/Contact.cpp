#include "./Contact.hpp"


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