bool isBeautifulString(std::string inputString) {
    int alphabet[26] {};
    for (char c: inputString){
        alphabet[c - 'a']++;
    }
    return std::is_sorted(std::rbegin(alphabet), std::rend(alphabet));
}