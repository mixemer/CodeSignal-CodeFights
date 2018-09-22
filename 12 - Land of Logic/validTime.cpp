bool validTime(std::string time) {
    std::size_t found =time.find(":");
    int f = stoi( time.substr(0,found) );
    int s = stoi( time.substr(found+1) );
    
    return ( f >= 0 && f <= 23 && s >= 0 && s <= 59 );
}