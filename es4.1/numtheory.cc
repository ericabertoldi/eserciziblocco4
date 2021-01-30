#include "numtheory.hpp"

bool isAbundant(int n)
{
    int sum = 1;
    for (int i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            sum += i;
            if (sum > n) {
                return true;
            }
        }
    }
    return false;
}

bool isDeficient(int n)
{
    int sum = 1;
    for (int i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            sum += i;
            if (sum < n) {
                return true;
            }
        }
    }
    return false;
}

bool isAbundantPrimitive(int n)
{
    if (isAbundant(n)) {
        for (int i = 1; i < n / 2; i++) {
            if (n % i == 0) {
                if (!isDeficient(i)) {
                    return false;
                }
            }
        }
        return true;
    } else
        return false;
}
