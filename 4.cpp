#include<iostream>
#include<string>
using namespace std;

int main(){
  int antenehAge , rutaAge , jemalAge;
  cout << "Determine Youngest" << endl;
  cout << "==================" << endl;
  cout << "Please insert the ages of Anteneh, Ruta and Jemal respectively separated by space \"12 22 33\" " <<endl;
  cin >> antenehAge >> rutaAge >> jemalAge;
  if(rutaAge > jemalAge && antenehAge > jemalAge)
    cout << "Jemal is the Youngest" << endl;
  else if(jemalAge > rutaAge && antenehAge > rutaAge )
    cout << "Ruta is the Youngest" << endl;
  else if(rutaAge > antenehAge  && jemalAge > antenehAge)
    cout << "Anteneh is the Youngest" << endl;
  else if(rutaAge == antenehAge && antenehAge < jemalAge)
    cout << "Anteneh and Ruta are the Youngest" << endl;
  else if(rutaAge == jemalAge && jemalAge < antenehAge)
    cout << "Ruta and Jemal are the Youngest" << endl;
  else if(antenehAge == jemalAge && jemalAge < rutaAge)
    cout << "Jemal and Anteneh are the Youngest" << endl;
  else
    cout << "All are equal of age" << endl;
}
