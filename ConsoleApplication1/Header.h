
#pragma once
#include <stdexcept>

class InsufficientFundsException : public std::exception {
private:
    const char* message;
public:

    InsufficientFundsException(const char* msg) : message(msg) {}

    const char* what() const noexcept override {
        return message;
    }
};