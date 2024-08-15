#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>


class Fixed
{
    private:
        int fixedpoint;
        static const int fractionalBits;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &oldFixed);
        Fixed& operator=(const Fixed &oldFixed);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
        bool operator>(const Fixed &value) const;
        bool operator<(const Fixed &value) const;
        bool operator>=(const Fixed &value) const;
        bool operator<=(const Fixed &value) const;
        bool operator==(const Fixed &value) const;
        bool operator!=(const Fixed &value) const;
        float operator+(const Fixed &value )const;
        float operator-(const Fixed &value) const;
        float operator*(const Fixed &value )const;
        float operator/(const Fixed &value) const;
        Fixed operator++(int);
        Fixed operator++();
        Fixed operator--(int);
        Fixed operator--();
        static const Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        static const Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& stream ,const Fixed &oldFixed);

#endif