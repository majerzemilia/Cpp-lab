#include <iostream>
#include "obiekty.h"
using namespace std;

int main()
{
    Wektor w1(2,3);
    cout<<"w1 = "<<endl<<w1;
    Wektor w2;
    cout<<endl<<"w2 = "<<endl<<w2;

    Macierz m1;
    Macierz m2(2,3,4,5);
    cout<<endl<<"m1 = "<<endl<<m1<<endl<<"m2 = "<<endl<<m2;

    Macierz m3(1,5,7,10);
    cout<<endl<<"m3 = "<<endl<<m3<<endl<<"m1+m3 = "<<endl<<m1+m3<<endl;

    m1 += m3;
    cout<<"Po dodaniu m1 += m3 macierz m1 wyglada tak: "<<endl<<m1<<endl;

    cout<<"w1 * 3 ="<<endl<<w1*3<<endl<<"3 * w1 ="<<endl<<3*w1<<endl;

    cout<<"m2 * w1 = "<<endl<<w1*m2<<endl;

    cout<<"m1--"<<endl<<m1--<<"m1 po tej operacji = "<<endl<<m1<<endl;
    cout<<"--m1"<<endl<<--m1<<endl;

    cout<<"-w1 ="<<endl<<-w1<<endl;

    cout<<"Porownanie w1 != w2"<<endl<<(w1!=w2)<<endl<<endl;

    Wektor w3(2,3);
    cout<<"w3 ="<<endl<<w3<<endl<<"porownanie w1 != w3"<<endl<<(w1!=w3)<<endl<<endl;

    cout<<"w3[0] = "<<w3[0]<<endl<<"w3[1] = "<<w3[1]<<endl<<endl;

    cout<<"(int)w3 = "<<(int)w3<<endl;

}
