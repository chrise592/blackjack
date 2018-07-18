#include "hello.h"

#include <gsl/gsl>
#include <memory>
#include <iostream>

using namespace gsl;
using namespace std;

int main()
{
    hello("Blackjack");

    owner<int*> p = new int(120);
    
    if (*p == 120)
        cout << "GSL works!\n";
    
    {
        auto p = make_unique<int>(2);
        
        if (*p == 2)
            cout << "Modern C++ is awesome!!!\n";
    }
}

