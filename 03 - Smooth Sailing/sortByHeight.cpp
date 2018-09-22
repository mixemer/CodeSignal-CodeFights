std::vector<int> sortByHeight(std::vector<int> a) {
    
    std::vector<int> onlyHeights;
    for (int i = 0; i < a.size(); i++){
        if (a[i] != -1){
            onlyHeights.push_back(a[i]);
        }
    }
    
    std::sort(onlyHeights.begin(), onlyHeights.end());
    
    int j = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i] != -1){
            a[i] = onlyHeights[j];
            j++;
        }
    }
    return a;
}
