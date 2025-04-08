int suma(int n){
    if (n == 0){
        return 0;
    }
    int suman = suma(n-1);
    return suman;
}

int fib(int n){
    if (n < 2){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}