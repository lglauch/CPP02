#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    fixedpoint = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    fixedpoint = value;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    fixedpoint = value;
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

float   Fixed::toFloat(void) const
{
    float floatvalue;

    floatvalue = static_cast<float>(fixedpoint)
}

int Fixed::toInt(void) const
{
    int roundedvalue;
    roundedvalue = roundf(fixedpoint);

    return (roundedvalue);
}