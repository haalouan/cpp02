#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fixedValue = 0;
}

Fixed::Fixed(const Fixed& other) : fixedValue(other.fixedValue) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->fixedValue = other.fixedValue;
    }
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixedValue;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    fixedValue = raw;
}
