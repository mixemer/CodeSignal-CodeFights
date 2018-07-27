char firstDigit(std::string inputString) {
    for ( char c: inputString) if (isdigit(c)) return c;
}
