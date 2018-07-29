std::string deleteNonLetters(string s){
    
    std::size_t found = s.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ");
    while (found != std::string::npos){
        s.replace(found, 1, " ");
        //s.erase(s.begin()+found);
        found = s.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ");
    }
    return s;
    
}

std::string longestWord(std::string text) {
    string s = deleteNonLetters(text);
    istringstream iss(s);
    
    string maxSub;
    iss >> maxSub;
    do{
        string subs;
        iss >> subs;
        if (subs.size() >= maxSub.size())
            maxSub = subs;
    }while(iss);
    
    return maxSub;
}
