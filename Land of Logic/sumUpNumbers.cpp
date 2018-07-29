int sumUpNumbers(std::string s) {
  std::smatch m;
  int total = 0;
  
  std::regex e ("[0-9]{1,}");   

  while (std::regex_search (s,m,e)) {
    for (auto x:m) {
        total += stoi(x);
        std::cout << x << " ";
    }
    std::cout << std::endl;
    s = m.suffix().str();
  }
  
  return total;
}
