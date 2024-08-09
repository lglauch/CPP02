#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private:
    int fixedpoint;
    static const int fractionalBits = 8;

    public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &oldFixed);
    Fixed& operator=(const Fixed &oldFixed);
    ~Fixed();
    float toFloat(void) const;
    int toInt(void) const;
};

#endif