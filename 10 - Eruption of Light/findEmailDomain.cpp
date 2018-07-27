std::string findEmailDomain(std::string address) {
    return address.substr(address.rfind("@")+1, address.size()-1);
}
