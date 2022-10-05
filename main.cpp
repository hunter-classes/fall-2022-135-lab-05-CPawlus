/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Functions and Prime Numbers, main.cpp, Lab 5.

This program uses certain files to determine prime
numbers its properties.
*/

#include <iostream>
#include "funcs.h"

int main()
{
  // A
  isDivisibleBy(100,25);
  std::cout << "-----\n";
  // B
  isPrime(29);
  std::cout << "-----\n";
  // C
  nextPrime(14);
  std::cout << "-----\n";
  // D
  countPrimes(5,23);
  std::cout << "-----\n";
  // E
  isTwinPrime(71);
  std::cout << "-----\n";
  // F
  nextTwinPrime(7);
  std::cout << "-----\n";
  // G
  largestTwinPrime(7,14);
  return 0;
}
