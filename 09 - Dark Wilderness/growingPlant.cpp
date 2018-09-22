int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    int day = 0;
    int currentHeight = 0;
    while (currentHeight < desiredHeight){
        day++;
        currentHeight += upSpeed;
        if (currentHeight >= desiredHeight)
            break;
        currentHeight -= downSpeed;
    }
    return day;
}
