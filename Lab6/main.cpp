#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include "Osoba.h"
using namespace std;

Osoba generuj(){
    return Osoba();
}

int main() {
    srand(time(NULL));

    vector<Osoba> vec(10);

    for(int i=0; i<10; i++) {
        const Osoba o = Osoba();
        vec.insert(vec.end(), o);
    }
    for (vector<Osoba>::iterator i=vec.begin(); i!= vec.end(); ++i) {
        cout << *i;
    }
    cout<<endl<<endl;

    set<Osoba> s;
    for (auto iv: vec){
        if(s.count(iv) != 0){
            cout<<iv;
        }
        s.insert(iv);
    }
    cout<<endl<<s.size()<<endl;

    map<string, Osoba> m;
    for(int i=0; i<5; i++){
        Osoba o = Osoba();
        m.insert(pair<string, Osoba>(o.getKlucz(), o));
    }
    for (auto im: m) {
        cout << "Klucz: "<<im.first<< ", wartosc: "<<im.second;
    }
    cout<<endl<<endl;

    vector<Osoba> v(20);
    generate(v.begin(), v.end(), generuj);
    cout << "Osoby w wektorze:\n";
    for (auto iv: v) {
        cout << iv;
    }
    cout << "\n";

    auto urodzony = find_if(begin(v), end(v), [](const Osoba &o){
        return o.getRokUr() == 2000;
    });
    if (urodzony != end(v)) cout<<*urodzony.base();
    cout<<endl<<endl;

    int podany_rok;
    cout<<"Podaj rok urodzenia dla ktorego obliczona zostanie liczba osob w wektorze"<<endl;
    cin>>podany_rok;
    int liczba_o_roku = count_if(v.begin(), v.end(), [podany_rok](const Osoba &o) {
        return o.getRokUr() == podany_rok;
    });
    cout<<liczba_o_roku<<endl<<endl;


    sort(v.begin(), v.end(), [](Osoba &o1, Osoba &o2) {
        return o1.getRokUr() <= o2.getRokUr();
    });
    sort(v.begin(), v.end(), [](Osoba &o1, Osoba &o2) {
        return o1.getNazwisko() <= o2.getNazwisko();
    });

    cout << "Osoby w wektorze:\n";
    for (auto iv: v) {
        cout << iv;
    }
    cout << "\n";
    cout<<endl<<endl;
    auto last = unique(v.begin(), v.end(), [](const Osoba &o1, const Osoba &o2){
        return o1.getNazwisko() == o2.getNazwisko();
    });
    v.erase(last, v.end());

    cout << "Osoby w wektorze:\n";
    for (auto iv: v) {
        cout << iv;
    }
    cout << "\n";


}