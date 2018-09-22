std::string messageFromBinaryCode(std::string input) {
    int pos = 0;
    string result;
    while (pos < input.size()) {
        
        string word = input.substr(pos, 8);
        pos += 8;
        
        bitset<8> bits(word);
        int n = bits.to_ulong();
        cout << word << ": " << n << ": " << char(n) << endl;
        result += char(n);
    }
    return result;
}
