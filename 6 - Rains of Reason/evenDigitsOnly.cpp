bool evenDigitsOnly(int n) {
    
    string sn = to_string(n);
    
    for (int i = 0; i < sn.size(); i++){
        int num = (int)sn[i] - 48;
        if (num % 2 != 0) return false;
    }

    return true;
}
