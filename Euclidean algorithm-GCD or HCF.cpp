////Euclidean algorithm-GCD or HCF
int calcGCD(int n, int m){
    //Euclidean algorithm
    while(n&&m){
        if(n>m)n%=m;
        else m%=n;
    }
    if(n)return n;
    return m;
}