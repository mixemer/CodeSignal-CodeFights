std::string reverseParentheses(std::string s) {
    
    while (s.find('(') != std::string::npos) {
        int lastOpeningParant = (int)s.rfind('(');
        int closingParantAfterOpening = (int)s.find(')');
        
        while (closingParantAfterOpening < lastOpeningParant)
            closingParantAfterOpening = (int)s.find(')',closingParantAfterOpening+1);
        
        reverse(s.begin() + lastOpeningParant, s.begin() + closingParantAfterOpening);
        
        lastOpeningParant = (int)s.rfind('(');
        s.erase(lastOpeningParant,1);
        closingParantAfterOpening = (int)s.find(')');
        
        while (closingParantAfterOpening < lastOpeningParant){
            closingParantAfterOpening = (int)s.find(')',closingParantAfterOpening+1);
        }
        s.erase(closingParantAfterOpening,1);
    }
    
    return s;
}
