int findp(int n){
    string num = to_string(n);
    int mult = 1;
    for (char& c: num){
        mult *= (c - 48);
    }
    return mult;
}

int digitsProduct(int product) {
    
    for (int i = 1; i < 10000; i++){
        int prod = findp(i);
        if (prod == product) return i;
    }
    return -1;
}