long taumBday(int b, int w, int bc, int wc, int z) {
    
    long costBlack = min((long)bc, (long)wc + z); 
    long costWhite = min((long)wc, (long)bc + z); 
    return (b * costBlack) + (w * costWhite);
}
