#include "Punkt.h"


namespace Geometria{

    using namespace std;

    Punkt::Punkt(const float x, const float y): x{x}, y{y}{}


    bool Punkt::zapisz(ostream &os) const{

        os<<"x: "<<to_string(x)<<", y: "<<to_string(y)<<"\n";
        return os.good();
    }

    bool Punkt::wczytaj(istream &is){
        is>>x>>y;
        return is.good();
    }

}
