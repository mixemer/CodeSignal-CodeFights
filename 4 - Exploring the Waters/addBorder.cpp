std::vector<std::string> addBorder(std::vector<std::string> picture) {
    
    for (int i = 0; i < picture.size(); i++) {
        picture[i].insert(0,"*");
        picture[i].append("*");
    }
    
    std::string border = std::string(picture[0].size(), '*');
    
    picture.insert(picture.begin(), border);
    picture.push_back(border);
        
    return picture;

}
