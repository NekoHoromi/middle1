#include "middle.h"
using namespace std;
int itc_rev_num(long long number)
{
    if (number <= 0) {
        return -1;
    }
    /*long long number2, number3 = 0;
    while (number > 0){
        number2 = number % 10;
        number3 = number3 * 10 + number2;
        number /= 10;
    }
    return number3;*/

    /*long long number2, number3 = 0, kop, kol = 0;
    kop = number;
    while (number > 0){
        number2 = number % 10;
        number3 = number3 * 10 + number2;
        number /= 10;
    }
    while(kop > 0){
        if (number3 % 10 != kop % 10){
            kol++;
        }
        number3 /= 10;
        kop /= 10;
    }
    return kol;*/

    long long number2, number3 = 0;
    while (number > 0){
        number2 = number % 10;
        number3 = number3 * 10 + number2;
        number /= 10;
    }
  int itc_second_max_num(long long number){
    if (number < 10){
        return -1;
    }
    if (number <= 0) {
        return -1;
    }
    int mmax = 0, mmax2 = -10000;
    while (number != 0){
        if (mmax < number % 10){
            mmax2 = mmax;
            mmax = number % 10;
        }
        else if (mmax2 < number % 10){
            mmax2 = number % 10;
        }
        number /= 10;
    }
    return mmax2;
}
int itc_second_simple_max_num(long long number){
    if (number < 10){
        return -1;
    }
    if (number <= 0) {
        return -1;
    }
    int mmax = 0, mmax2 = -10000;
    while (number != 0){
        if (mmax < number % 10){
            mmax2 = mmax;
            mmax = number % 10;
        }
        else if (mmax2 < number % 10){
            mmax2 = number % 10;
        }
        number /= 10;
    }
    if (mmax == mmax2){
        return -1;
    }
    return mmax2;
}
    return itc_len_num(number3);
}

int itc_null_count(long long number){
    if (number <= 0) {
        return -1;
    }
    long long kol;
    while (number != 0){
        if (number % 10 == 0){
            kol++;
        }
        number /= 10;
    }
    return kol;
}
bool itc_mirror_num(long long number){
    if (number <= 0) {
        return -1;
    }
    long long number2, number3 = 0;
    number2 = number;
    while (number != 0){
        number3 = number3 * 10 + number % 10;
        number /= 10;
    }
    if (number2 == number3){
        return true;
    }
    return false;
}
int itc_mirror_count(long long number){
    if (number <= 0) {
        return -1;
    }
    int kol = 0;
    for (int i = 1; i <= number; i++){
        if (itc_mirror_num(i) == true){
            kol++;
        }
    }
    return kol;
}
