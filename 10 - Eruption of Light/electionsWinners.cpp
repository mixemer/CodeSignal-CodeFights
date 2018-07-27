// how many can win if they get votes from their oppenents.
// k means how many votes are remining
int electionsWinners(std::vector<int> votes, int k) {
    std::sort(votes.begin(), votes.end());
    int winners = 0;
    int size = votes.size();
    for (int i = 0; i < size - 1; i++){
        if (votes[i] + k > votes[ size - 1 ])
            winners++;
    }
    
    if (votes[size - 1] + k > votes[size - 2])
        winners++;
    
    return winners;
}
