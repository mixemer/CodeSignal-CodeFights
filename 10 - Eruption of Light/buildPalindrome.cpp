std::string reverseString(std::string str){
    int size = (int)str.size();
    for (int i = 0; i < size/2; i++){
        swap(str[i], str[size - 1 - i]);
    }
    return str;
}

bool checkPalindrome(std::string str){
    int beg = 0;
    int end = (int)str.size() - 1;
    while (beg < end){
        if (str[beg] != str[end])
            return false;
        beg++;
        end--;
    }
    return true;
}

std::string buildPalindrome(std::string st) {
    std::string temp = reverseString(st);
    std::string result = "";
    if (checkPalindrome(st))
        return st;
    for (int i = 0; i < st.size(); i++){
        result = st + temp.substr(temp.size() - 1 - i);
        if (checkPalindrome( result ))
            break;
    }
    return result;
}
