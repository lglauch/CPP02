#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    fixedpoint = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    fixedpoint = static_cast<int>(roundf(value * (1 << fractionalBits)));
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    fixedpoint = static_cast<int>(roundf(value * (1 << fractionalBits)));
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
    return static_cast<float>(fixedpoint) / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
    return (static_cast<int>(fixedpoint) / (1 << fractionalBits));

}

std::ostream& operator<<(std::ostream& stream, const Fixed &oldFixed)
{
    return (stream << oldFixed.toFloat());
}

bool Fixed::operator>(const Fixed &value) const
{
    return (this->toFloat() > value.toFloat());

}

bool Fixed::operator<(const Fixed &value) const
{
    return (this->toFloat() < value.toFloat());
}

bool Fixed::operator>=(const Fixed &value) const
{
    return (this->toFloat() >= value.toFloat());
}

bool Fixed::operator<=(const Fixed &value) const
{
    return (this->toFloat() <= value.toFloat());
}

bool Fixed::operator==(const Fixed &value) const
{
    return (this->toFloat() == value.toFloat());
}

bool Fixed::operator!=(const Fixed &value) const
{
    return (this->toFloat() != value.toFloat());
}

float Fixed::operator+(const Fixed &value ) const
{
    return (this->toFloat() + value.toFloat());
}

float Fixed::operator-(const Fixed &value ) const
{
    return (this->toFloat() - value.toFloat());
}

float Fixed::operator*(const Fixed &value ) const
{
    return (this->toFloat() * value.toFloat());
}

float Fixed::operator/(const Fixed &value ) const
{
    return (this->toFloat() / value.toFloat());
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->fixedpoint += 1;
    return temp;
}

Fixed Fixed::operator++()
{
    this->fixedpoint += 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->fixedpoint -= 1;
    return temp;
}

Fixed Fixed::operator--()
{
    this->fixedpoint -= 1;
    return *this;
}

const Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a.toFloat() > b.toFloat() ? a : b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a.toFloat() > b.toFloat() ? a : b);
}

const Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a.toFloat() < b.toFloat() ? a : b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a.toFloat() < b.toFloat() ? a : b);
}