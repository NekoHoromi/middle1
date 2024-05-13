#include "middle.h"
using namespace std;


long long itc_oct_num(long long number){
    if (number <= 0) {
        return -1;
    }
    if (number < 0){
        return -1;
    }
    int a = 1;
    long long itogo = 0;
    while (number != 0){
        itogo = itogo + number % 8 * a;
        number /= 8;
        a *= 10;
    }
    return itogo;
}
int itc_rev_bin_num(long long number){
    if (number <= 0){
        return -1;
    }
    long long num = number;
    long long a = 1;
    long long rezult = 0;
    while (num != 0){
        if (num % 10 >= 2){
            return -1;
        }
    num /= 10;
    }
    while (number != 0){
        rezult = rezult + number % 10 * a;
        a *= 2;
        number /= 10;
    }
    return rezult;
}
int itc_rev_oct_num(long long number){
    if (number <= 0){
        return -1;
    }
    long long num = number;
    long long a = 1;
    long long rezult = 0;
    while (num != 0){
        if (num % 10 >= 8){
            return -1;
        }
    num /= 10;
    }
    while (number != 0){
        rezult = rezult + number % 10 * a;
        a *= 8;
        number /= 10;
    }
    return rezult;
}
int itc_rev_covert_num(long long number, int ss){
    if (number <= 0){
        return -1;
    }
    long long num = number;
    long long a = 1;
    long long rezult = 0;
    while (num != 0){
        if (num % 10 >= ss){
            return -1;
        }
    num /= 10;
    }
    while (number != 0){
        rezult = rezult + number % 10 * a;
        a *= ss;
        number /= 10;
    }
    return rezult;
}
int itc_covert_num(long long number, int ss){
    if (number <= 0){
        return -1;
    }
    int a = 1;
    long long itogo = 0;
    while (number != 0){
        itogo = itogo + number % ss * a;
        number /= ss;
        a *= 10;
    }
    return itogo;
}

long long itc_bin_num(long long number){
    if (number < 0){
        return -1;
    }
    int a = 1;
    long long itogo = 0;
    while (number != 0){
        itogo = itogo + number % 2 * a;
        number /= 2;
        a *= 10;
    }
    return itogo;
}
