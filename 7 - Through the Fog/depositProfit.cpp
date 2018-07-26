int depositProfit(int deposit, int rate, int threshold) {
    
    double total = (double)(deposit);
    int year = 0;
    while (total < threshold){
        total += total * rate / 100;
        year++;
    }
    return year;
}