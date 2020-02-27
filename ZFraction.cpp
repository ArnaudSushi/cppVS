#include "ZFraction.h"

#ifndef DEF_FRACTION
#define DEF_FRACTION

#include <iostream>

class ZFraction {
    public:

    ZFraction() {
        this.value = 0;
    }
    
    ZFraction(int a, int b = 1) {
        int pgcd = pgcd(a, b);
        a = a / pgcd;
        b = b / pgcd;
        if (a < b) { this.m_numerateur = a; this.m_denominateur = b; }
        if (b < a) { this.m_numerateur = b; this.m_denominateur = a; }
    }

    private:
    int value;
    int m_numerateur;   //Le numérateur de la fraction
    int m_denominateur; //Le dénominateur de la fraction
};

int pgcd(int a, int b) {
    while (b != 0) {
        const int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

#endif