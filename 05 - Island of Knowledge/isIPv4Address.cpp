bool isValid(std::string s){
    int dots = 0;
    for (int i = 0; i < s.size(); i++){
        if (( (int)s[i] == 46 )) dots++;
        else if ( ( (int)s[i] < 48 || (int)s[i] > 57 ) ) return false;
    }
    
    if (dots == 3) return true;
    else return false;
}

bool isIPv4Address(std::string inputString) {
    
    if (inputString.size() < 7) return false;
    if (!isValid(inputString)) return false;
    
    while ( inputString.find(".") != string::npos ){
        
        string token = inputString.substr(0,inputString.find("."));
        if (token.empty()) return false;
        if (token.size() > 3) return false;
        cout << "token: " << token << endl;
        int num = stoi(token);
        cout << "num: " << num << endl;
        if (num < 0 || num > 255) return false;
        
        inputString.erase(0,inputString.find(".")+1);
    }
    
    if (inputString.empty()) return false;
    cout << "last token: " << inputString << endl;
    int num = stoi(inputString);
    cout << "last num: " <<num << endl;
    if (num < 0 || num > 255) return false;
    
    return true;
    
}