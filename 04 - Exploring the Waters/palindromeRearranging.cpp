bool palindromeRearranging(std::string inputString) {
    
    map<char, int> smap;
    int sizeOfString = (int)inputString.size();
    cout << sizeOfString << endl;
    
    for (int i = 0; i < sizeOfString; i++){
        smap[inputString[i]]++;
    }
    
    int odd = 0;
    for (auto& a: smap){
        cout << a.first << " " << a.second << endl;
        if (a.second % 2 != 0) odd ++;
    }
    
    if (odd > 1) return false;
    if (sizeOfString % 2 != 0 && odd == 1) return true;
    else return true;
}