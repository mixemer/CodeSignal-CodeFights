bool checkPalindrome(std::string inputString) {
    char* beg = &inputString[0];
	char* end = &inputString[inputString.size()-1];
    
    while (beg < end){
        if (*beg != *end)
            return false;
        beg++;
        end--;
    }
    
    return true;
}
