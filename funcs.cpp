#include <iostream>
#include "funcs.h"

// Functions
bool isDivisibleBy(int n, int d) 
{
    // Temp variable
    bool div = false;
    // Conditionals
    if(d<1) 
    {
        std::cout << std::boolalpha << false << "\n";
        return div;
    }
    else if(n%d == 0) 
    {
        std::cout << std::boolalpha << true << "\n";
        return !div;
    }
    else 
    {
        std::cout << std::boolalpha << false << "\n";
        return div;
    }
}

bool isPrime(int n) 
{
    // Temp variable
    bool div = false;
    int count = 0;
    // Conditionals
    if(n<2) 
    {
        std::cout << std::boolalpha << false << "\n"; 
        return div;
    }
    for(int i = n; i >= 2; i--) 
    {
        if(n%i != 0) 
        {
            count++;
        }
    }
    if(count == (n-2)) 
    {
        std::cout << std::boolalpha << true << "\n"; 
        return !div;
    }
    else 
    {
        std::cout << std::boolalpha << false << "\n"; 
        return div;
    }
}

// Temp (Helper) function since isPrime always outputs true or false, not returning bool value.
bool isPrimeBoolOnly(int n) 
{
    // Temp variable
    bool div = false;
    int count = 0;
    // Conditionals
    if(n<2) 
    {
        return div;
    }
    for(int i = n; i >= 2; i--) 
    {
        if(n%i != 0) 
        {
            count++;
        }
    }
    if(count == (n-2)) 
    {
        return !div;
    }
    else 
    {
        return div;
    }
}

int nextPrime(int n) 
{
    int i = n+1;
    while(!isPrimeBoolOnly(i)) 
    {
        i++;
    }
    std::cout << i << "\n";
    return i;
}

int countPrimes(int a, int b) 
{
    int count = 0;
    while(a <= b)
    {
        if(isPrimeBoolOnly(a)) 
        {
            count++;
        }
        a++;
    }
    std::cout << count << "\n";
    return count;
}
   
bool isTwinPrime(int n) 
{
    bool twin_prime = false;
    bool prime = isPrimeBoolOnly(n);
    if(prime) 
    {
        if(isPrimeBoolOnly(n-2) || isPrimeBoolOnly(n+2)) 
        {
            std::cout << std::boolalpha << true << "\n"; 
            return !twin_prime;
        }
        else 
        {
            std::cout << std::boolalpha << false << "\n"; 
            return twin_prime;
        }
    }
    else 
    {
        std::cout << std::boolalpha << false << "\n"; 
        return twin_prime;
    }
}

// Temp (Helper) function since isTwinPrime always outputs true or false, not returning bool value.
bool isTwinPrimeBoolOnly(int n) 
{
    bool twin_prime = false;
    bool prime = isPrimeBoolOnly(n);
    if(prime) 
    {
        if(isPrimeBoolOnly(n-2) || isPrimeBoolOnly(n+2)) 
        {
            return !twin_prime;
        }
        else 
        {
            return twin_prime;
        }
    }
    else 
    {
        return twin_prime;
    }
}

int nextTwinPrime(int n) 
{
    int i = n+1;
    while(!isTwinPrimeBoolOnly(i)) 
    {
        i++;
    }
    std::cout << i << "\n";
    return i;
}

int largestTwinPrime(int a, int b) 
{
    int lrg_tp = -1;
    for(int i = a; i <= b; i++) 
    {
        if(isTwinPrimeBoolOnly(i))
        {
            lrg_tp = i;
        }
        i++;
    }
    std::cout << lrg_tp << "\n";
    return lrg_tp;
}
