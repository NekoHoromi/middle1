#include "middle.h"
using namespace std;

void itc_num_print(int number){
    cout << number << endl;
}
int itc_len_num(long long number){
    
    int kolich = 0;
    while (number > 0){
        number /= 10;
        kolich ++;
    }
    return kolich;
}
int itc_sum_num(long long number){
    int num, summ = 0;
    while (number > 0){
        num = number % 10;
        summ += num;
        number /= 10;
    }
    return summ;
}
long long itc_multi_num(long long number){
    int num, proiz = 1;
    while (number > 0){
        num = number % 10;
        proiz *= num;
        number /= 10;
    }
    return proiz;
}
int itc_max_num(long long number){

    int num, maxi = 0;
    while (number > 0){
        num = number % 10;
        if (num > maxi){
            maxi = num;
        }
        number /= 10;
    }
    return maxi;
}
int itc_min_num(long long number){
    
    int num, mini = 9;
    while (number > 0){
        num = number % 10;
        if (num < mini){
            mini = num;
        }
        number /= 10;
    }
    return mini;
}
