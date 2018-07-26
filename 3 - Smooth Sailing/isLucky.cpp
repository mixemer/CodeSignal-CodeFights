bool isLucky(int n) {
    
    string snum = to_string(n);
    
    string lstr = "";
    string rstr = "";
    
    for (int i = 0; i < snum.size()/2; i++){
        lstr += snum[i];
    }
    for (int i = snum.size()/2; i < snum.size(); i++){
        rstr += snum[i];
    }
    
    int lnum = 0;
    int rnum = 0;
    for (int i = 0; i < lstr.size(); i++){
        lnum += (int)(lstr[i]) - 48;
    }
    for (int i = 0; i < rstr.size(); i++){
        rnum += (int(rstr[i])) - 48;
    }
    
    return (lnum == rnum);
    
}
