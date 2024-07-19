#pragma once
#include <stdexcept>

class ArgumentException : public std::exception {
private:
    const char* message;
public:

    ArgumentException(const char* msg) : message(msg) {}

    const char* what() const noexcept override {
        return message;
    }
};