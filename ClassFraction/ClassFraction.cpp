
#include <iostream>
#include "Fraction.h"
using namespace std;
int main()
{
    Fraction dr1;
    Fraction dr2;
    Fraction dr3;
    cin >> dr1;
    cin >> dr2;
    //проверка
    cout << "\n" << dr1 << "\n" << dr2 << "\n";
    //++
    ++dr1;
    dr2++;
    cout << "\n++";
    cout << "\n" << dr1 << "\n" << dr2 << "\n";
    //позвращаемся к начальным показателям дробей
    --dr1;
    dr2--;
    //--
    --dr1;
    dr2--;
    cout << "\n--";
    cout << "\n" << dr1 << "\n" << dr2 << "\n";
    //позвращаемся к начальным показателям дробей
    ++dr1;
    dr2++;
    //+
    dr3 = dr1 + dr2;
    cout << "\n+";
    cout << "\n" << dr3 << "\n";
    //-
    dr3 = dr1 - dr2;
    cout << "\n-";
    cout << "\n" << dr3 << "\n";
    //*
    dr3 = dr1 * dr2;
    cout << "\n*";
    cout << "\n" << dr3 << "\n";
    //"/"
    dr3 = dr1 / dr2;
    cout << "\n/";
    cout << "\n" << dr3 << "\n";
    //+=
    dr3 = dr1;
    dr3 += dr2;
    cout << "\n+=";
    cout << "\n" << dr3 << "\n";
    //-=
    dr3 = dr1;
    dr3 -= dr2;
    cout << "\n-=";
    cout << "\n" << dr3 << "\n";
    
    //*=
    dr3 = dr1;
    dr3 *= dr2;
    cout << "\n*=";
    cout << "\n" << dr3 << "\n";
    
    //"/="
    dr3 = dr1;
    dr3 /= dr2;
    cout << "\n/=";
    cout << "\n" << dr3 << "\n";
    //<
    cout << "\n<";
    cout << "\n" << (dr1<dr2) << "\n";
    
    //<=
    cout << "\n<=";
    cout << "\n" << (dr1<=dr2) << "\n";
    
    //>
    cout << "\n>";
    cout << "\n" << (dr1>dr2) << "\n";
    
    //>=
    cout << "\n>=";
    cout << "\n" << (dr1>=dr2) << "\n";
    
    //==
    cout << "\n==";
    cout << "\n" << (dr1==dr2) << "\n";

}

