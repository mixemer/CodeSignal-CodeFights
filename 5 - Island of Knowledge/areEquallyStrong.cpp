bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    
    int ywarm = min(yourLeft, yourRight); // 10
    int ysarm = max(yourLeft, yourRight); // 15
    
    int fwarm = min(friendsLeft, friendsRight); // 5
    int fsarm = max(friendsLeft, friendsRight); // 20
    
    if (ywarm == fwarm && ysarm == fsarm) return true;
    else return false;
    
}
