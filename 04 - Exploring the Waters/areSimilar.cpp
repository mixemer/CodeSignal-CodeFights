bool areSimilar(std::vector<int> a, std::vector<int> b) {
    
    int notSame = 0;
    set<int> setA;
    set<int> setB;
    
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]){
            notSame++;
            setA.insert(a[i]);
            setB.insert(b[i]);
        }
    }
    
    if (notSame == 0) return true;
    else if (notSame == 2 && setA == setB)
        return true;
    
    return false;

}
