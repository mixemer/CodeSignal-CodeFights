bool variableName(std::string name) {
    
    regex check ("[_a-zA-z][_a-zA-Z0-9]*");
    return regex_match(name, check);
    
}