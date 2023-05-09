
#include <iostream>
#include "Fraction.h"
#include "MyList.h"
using namespace std;
int main()
{
    //примеры с числами
    MyList<int> list(2);
    list.addend(3);
    list.addbegin(1);
    cout << list << endl;
    cout <<list.getdelstart() << " " << list.getdelend() << endl;
    cout << list <<" Len:" << list.len()<<endl;
    list.addend(3);
    list.addbegin(1);
    for (int i = 4; i < 20; i++) {
        list.addend(i);
    }
    list.rands();
    cout << list<<endl;

    MyList<Fraction> flist;
    Fraction dr1(3, 4);
    Fraction dr2(2, 3);
    Fraction dr3(1, 7);
    flist.addbegin(dr1);
    flist.addend(dr2);
    flist.addbegin(dr3);
    list.rands();
    cout << flist<<endl;




















/*
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
*/

}

