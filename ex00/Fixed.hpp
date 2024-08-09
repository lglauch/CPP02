#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
    int fixedpoint;
    static const int fractionalBits = 8;

    public:
    Fixed();
    Fixed(const Fixed &oldFixed);
    Fixed& operator=(const Fixed &oldFixed);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif