int shapeArea(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return shapeArea(n-1) + 4 * (n-1);
}
