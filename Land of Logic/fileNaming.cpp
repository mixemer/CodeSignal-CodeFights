std::vector<std::string> fileNaming(std::vector<std::string> names) {
    
    std::vector<int> nums;
    for (int i = 0; i < names.size(); i++){
        nums.push_back(1);
    }
    // 1 1 1 1 1 1 1 ....
    for (int i = 1; i < names.size(); i++){
        string currentName = names[i];
        for (int j = 0; j < i; j++){
            string checkName = names[j];
            if (currentName == checkName){
                for (int k = 0; k < i; k++){
                    string temp = names[i] + "(" + to_string(nums[j]) + ")";
                    string checkName2 = names[k];
                    if ( temp == checkName2 ){
                        nums[j]++;
                    }
                }
                names[i] += "(";
                names[i] += to_string(nums[j]);
                names[i] += ")";
                nums[j]++;
            }
        }
    }
    
    return names;
}