int deleteDigit(int n) {
    string ns = to_string(n);
    
    int max = stoi( ns.substr(1) );

    for (int i = 1; i < ns.size(); i++){
        string nns = ns;
        nns.erase(nns.begin()+i);
        if (stoi(nns) > max)
            max = stoi(nns);
    }
    return max;
}
