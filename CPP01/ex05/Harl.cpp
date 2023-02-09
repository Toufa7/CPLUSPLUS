#include "Harl.hpp"


// A person named Harl should find a way to express complaints without using
// a large number of if/else statements. 

void    Harl::debug()
{
    std::cout << "Expressing love for extra bacon in 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl;
}

void    Harl::info()
{
    std::cout << "Disbelief about extra bacon cost, not enough bacon in burger" << std::endl;
}

void    Harl::warning()
{    
    std::cout << "Request for free extra bacon, as a long-time customer" << std::endl;
}

void    Harl::error()
{
    std::cout << "Unacceptable, request to speak with manager immediately" << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*PFn[4])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string Complaints[4] =
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (size_t i = 0; i < sizeof(Complaints) / sizeof(Complaints[0]) ; i++)
    {
        if (Complaints[i] == level)
        {    
            (this->*PFn[i])();
                return ;
        }
    }
    std::cout << "No complaints, everything is good.\n";
}


int main()
{
    Harl    Client;
    /*
        *   !   Working
    */          
    {
        Client.complain("INFO");
        Client.complain("WARNING");
        Client.complain("ERROR");
    }
    /**
        *   ! Not Working
    */
    {
        Client.complain("AEBUGDEBUG");   
        Client.complain("SEBUG");
        Client.complain("");
    }
    return (0);
}