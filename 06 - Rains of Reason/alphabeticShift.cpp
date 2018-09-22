std::string alphabeticShift(std::string inputString) {
    
    for (int i = 0; i < inputString.size(); i++){
        if (inputString[i] == 'z'){
            inputString[i] = 'a';
        }else{
            inputString[i] =  (char)(inputString[i] + 1);
        }
    }
    return inputString;
}
