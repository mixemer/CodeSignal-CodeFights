int workOnCenters(vector<vector<int>> v, int r, int c){
    int total = 0;
    for (int i = (r - 1); i <= (r + 1); i++){
        for (int j = (c - 1); j <= (c + 1); j++){
            total += v[i][j];
        }
    }
    
    return floor(total / 9);
}

std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    
    vector<vector<int>> centers;

    int asize = (int)image.size();
    for (int i = 0; i < asize; i++){
        int aasize = (int)image[i].size();
        if (i != 0 && i != (asize - 1) ){
            centers.push_back(vector<int>());
            for (int j = 0; j < aasize; j++){
                if (j != 0 && j != (aasize - 1)){
                    centers[i-1].push_back(workOnCenters(image,i,j));
                }
            }
        }
    }
    
    return centers;

}
