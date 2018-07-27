bool isMAC48Address(std::string inputString) {    
    std::regex MAC_regex("[A-F0-9]{2}(-[A-F0-9]{2}){5}");
    return regex_match(inputString, MAC_regex);
    
}
