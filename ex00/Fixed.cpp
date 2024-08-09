#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    fixedpoint = 0;
}

Fixed::Fixed(const Fixed &oldFixed)
{
        std::cout << "Copy constructor called" << std::endl;
    fixedpoint = oldFixed.fixedpoint;
}

Fixed& Fixed::operator=(const Fixed &oldFixed)
{
        std::cout << "Copy assignment operator called" << std::endl;
    if (this != &oldFixed)
    {
        fixedpoint = oldFixed.fixedpoint;
    }
    return (*this);
}

Fixed::~Fixed(void)
{
        std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixedpoint);
}

void    Fixed::setRawBits(int const raw)
{
    fixedpoint = raw;
}