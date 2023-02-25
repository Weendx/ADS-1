// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <cmath>

bool checkPrime(uint64_t value) {
// вставьте код функции
    for (uint64_t i = 2; i <= sqrt(value); ++i) {
        if (value % i  == 0) return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    uint64_t lastNumId = 0;
    for (uint64_t i = 2; ; ++i){
      if (!checkPrime(i)) continue;
      if (++lastNumId == n) return i;
    } 
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    uint64_t tempNum = value+1;
    while (true) {
      if (checkPrime(tempNum)) return tempNum;
      else ++tempNum;
    }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    uint64_t sum = 0;
    for (uint64_t num = hbound - 1; num > 1; --num) {
        if (checkPrime(num)) sum += num;
    }
    return sum;
}
