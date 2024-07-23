#include <iostream>
#include <cctype> // for isalnum

bool isValidUsername(const std::string &username) {
    if (username.length() < 5 || username.length() > 15) return false;
    for (char ch : username) {
        if (!isalnum(ch)) return false;
    }
    return true;
}

int main() {
    std::string username;
    std::cout << "Enter a username: ";
    std::getline(std::cin, username); // Read entire line including spaces

    std::cout << (isValidUsername(username) ? "The username is valid." : "The username is invalid.") << std::endl;

    return 0;
}

