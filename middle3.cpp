#include "middle.h"
using namespace std;

long long itc_bin_num(long long number){
    if (number < 0){
        return -1;
    }
    int k = 1;
    long long itog = 0;
    while (number != 0){
        itog = itog + number % 2 * k;
        number /= 2;
        k *= 10;
    }
    return itog;
}
long long itc_oct_num(long long number){
    if (number <= 0) {
        return -1;
    }
    if (number < 0){
        return -1;
    }
    int k = 1;
    long long itog = 0;
    while (number != 0){
        itog = itog + number % 8 * k;
        number /= 8;
        k *= 10;
    }
    return itog;
}
int itc_rev_bin_num(long long number){
    if (number <= 0){
        return -1;
    }
    long long number2 = number;
    long long k = 1;
    long long rez = 0;
    while (number2 != 0){
        if (number2 % 10 >= 2){
            return -1;
        }
    number2 /= 10;
    }
    while (number != 0){
        rez = rez + number % 10 * k;
        k *= 2;
        number /= 10;
    }
    return rez;
}
int itc_rev_oct_num(long long number){
    if (number <= 0){
        return -1;
    }
    long long number2 = number;
    long long k = 1;
    long long rez = 0;
    while (number2 != 0){
        if (number2 % 10 >= 8){
            return -1;
        }
    number2 /= 10;
    }
    while (number != 0){
        rez = rez + number % 10 * k;
        k *= 8;
        number /= 10;
    }
    return rez;
}
int itc_rev_covert_num(long long number, int ss){
    if (number <= 0){
        return -1;
    }
    long long number2 = number;
    long long k = 1;
    long long rez = 0;
    while (number2 != 0){
        if (number2 % 10 >= ss){
            return -1;
        }
    number2 /= 10;
    }
    while (number != 0){
        rez = rez + number % 10 * k;
        k *= ss;
        number /= 10;
    }
    return rez;
}
int itc_covert_num(long long number, int ss){
    if (number <= 0){
        return -1;
    }
    int k = 1;
    long long itog = 0;
    while (number != 0){
        itog = itog + number % ss * k;
        number /= ss;
        k *= 10;
    }
    return itog;
}
