int commonCharacterCount(std::string s1, std::string s2) {
    int totalChar = 0;
    
    std::vector<char> s2vector;
    
    int ind = 0;
    while (s2[ind]){
        s2vector.push_back(s2[ind]);
        ind++;
    }
    
    for (int i = 0; i < s1.size(); i++){
        char s1char = s1[i];
        for (int j = 0; j < s2vector.size(); j++){
            char s2char = s2vector[j];
            if (s1char == s2char){
                totalChar++;
                s2vector.erase(s2vector.begin()+j);
                break;
            }
        }
    }
    
    return totalChar;
}
