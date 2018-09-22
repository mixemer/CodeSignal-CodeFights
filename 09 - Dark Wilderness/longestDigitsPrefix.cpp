std::string longestDigitsPrefix(std::string inputString) {
    return inputString.substr(0, inputString.find_first_not_of("0123456789"));
}
