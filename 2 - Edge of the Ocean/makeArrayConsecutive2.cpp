int makeArrayConsecutive2(std::vector<int> statues) {
    sort(begin(statues),end(statues));
    
    int min = statues[0];
    int max = statues[statues.size() - 1];
    
    int statuesNeeded = 0;
    
    for (int i = min; i <= max; i++){
        for (int j = 0; j < statues.size(); j++){
            if (i == statues[j])
                statuesNeeded++;
        }
    }
    
    return max - min - statuesNeeded + 1;
}
