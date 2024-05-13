#include "middle.h"
using namespace std;
int itc_rev_num(long long number){
    if (number <= 0) {
        return -1;
    }

    long long num, num3 = 0;
    while (number > 0){
        num = number % 10;
        num3 = num3 * 10 + num;
        number /= 10;
    }
}
  int itc_second_max_num(long long number){
    if (number < 10){
        return -1;
    }
    if (number <= 0) {
        return -1;
    }
    int maxi = 0, maxi2 = -10000;
    while (number != 0){
        if (maxi < number % 10){
            maxi2 = maxi;
            maxi = number % 10;
        }
        else if (maxi2 < number % 10){
            maxi2 = number % 10;
        }
        number /= 10;
    }
    return maxi2;
}
int itc_second_simple_max_num(long long number){
    if (number < 10){
        return -1;
    }
    if (number <= 0) {
        return -1;
    }
    int maxi = 0, maxi2 = -10000;
    while (number != 0){
        if (maxi < number % 10){
            maxi2 = maxi;
            maxi = number % 10;
        }
        else if (maxi2 < number % 10){
            maxi2 = number % 10;
        }
        number /= 10;
    }
    if (maxi == maxi2){
        return -1;
    }
    return maxi2;

    return itc_len_num(num3);
}

int itc_null_count(long long number){
    if (number <= 0) {
        return -1;
    }
    long long kolich;
    while (number != 0){
        if (number % 10 == 0){
            kolich++;
        }
        number /= 10;
    }
    return kolich;
}
bool itc_mirror_num(long long number){
    if (number <= 0) {
        return -1;
    }
    long long num, num3 = 0;
    num = number;
    while (number != 0){
        num3 = num3 * 10 + number % 10;
        number /= 10;
    }
    if (num == num3){
        return true;
    }
    return false;
}
int itc_mirror_count(long long number){
    if (number <= 0) {
        return -1;
    }
    int kolich = 0;
    for (int i = 1; i <= number; i++){
        if (itc_mirror_num(i) == true){
            kolich++;
        }
    }
    return kolich;
}
