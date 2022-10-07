#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// isDivisibleBy(int, int) Function Test Cases
TEST_CASE("Divisible By A Number Cases") 
{
   CHECK(isDivisibleBy(0,0) == false);
   CHECK(isDivisibleBy(10,0) == false);
   CHECK(isDivisibleBy(10,5) == true);
   CHECK(isDivisibleBy(10,-5) == false);
}

// isPrime(int) Function Test Cases
TEST_CASE("Prime Number Cases") 
{
   CHECK(isPrime(0) == false);
   CHECK(isPrime(1) == false);
   CHECK(isPrime(2) == true);
   CHECK(isPrime(101) == true);
   CHECK(isPrimeBoolOnly(1) == false);
   CHECK(isPrimeBoolOnly(101) == true);
   CHECK(isPrime(-2) == false);
}

// nextPrime(int) Function Test Cases
TEST_CASE("Next Prime Number Cases") 
{
   CHECK(nextPrime(14) == 17);
   CHECK(nextPrime(0) == 2);
   CHECK(nextPrime(-5) == 2);
}

// countPrimes(int, int) Function Test Cases
TEST_CASE("Count Primes In Range Cases") 
{
   CHECK(countPrimes(5,23) == 7);
   CHECK(countPrimes(4,4) == 0);
   CHECK(countPrimes(-5,-1) == 0);
}

// isTwinPrime(int) Function Test Cases
TEST_CASE("Twin Prime Number Cases") 
{
   CHECK(isTwinPrime(11) == true);
   CHECK(isTwinPrime(23) == false);
   CHECK(isTwinPrime(13) == true);
   CHECK(isTwinPrime(-7) == false);
   CHECK(isTwinPrimeBoolOnly(13) == true);
   CHECK(isTwinPrimeBoolOnly(23) == false);
}

// nextTwinPrime(int) Function Test Cases
TEST_CASE("Next Twin Prime Number Cases") 
{
   CHECK(nextTwinPrime(5) == 7);
   CHECK(nextTwinPrime(14) == 17);
   CHECK(nextTwinPrime(-2) == 3);
}

// largestTwinPrime(int, int) Function Test Cases
TEST_CASE("Largest Twin Prime In Range Cases") 
{
   CHECK(largestTwinPrime(5,18) == 17);
   CHECK(largestTwinPrime(7,11) == 11);
   CHECK(largestTwinPrime(14,15) == -1);
   CHECK(largestTwinPrime(5,5) == 5);
   CHECK(largestTwinPrime(-7,-5) == -1);
}
