int avoidObstacles(std::vector<int> inputArray) {
    
    sort(inputArray.begin(), inputArray.end());
    
    int numOfSteps = 0;
    int jumpLengt = 1;
    int jumStep = 0;
    
    bool touchAbstacle = false;
    
    while (!touchAbstacle){
        jumStep += jumpLengt; //1

        
        for(int i = 0; i < inputArray.size(); i++){
            if (jumStep == inputArray[i]){
                jumStep = 0;
                numOfSteps = 0;
                jumpLengt++;
                break;
            }
        }
        numOfSteps++;
        
        if ( jumStep > inputArray[inputArray.size()-1] ){
            break;
        }
    }
    
    cout << "jumStep: " << jumStep << endl;
    cout << "numOfSteps: " << numOfSteps << endl;
    
    return jumpLengt;
}