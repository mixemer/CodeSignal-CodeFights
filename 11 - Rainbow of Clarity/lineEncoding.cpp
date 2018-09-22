std::string lineEncoding(std::string s) {
    std::string result = "";
    
    int count = 1;
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] == s[i+1]){
            count++;
        }else{
            if (count > 1)
                result += to_string(count);
            result += s[i];
            count = 1;
        }
    }
    
    
    if (count > 1)
        result += to_string(count);
    result += s[s.size() - 1];
    
    cout << count << endl;
    
    return result;
}
