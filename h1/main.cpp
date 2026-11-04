#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;
void calcSum(int a, int b);
void calcDiv(int a, int b);
int retsum(int a, int b);
float returndiv(int a, int b);

int main()
{
    int a;
    int b;

    cout << "Anna ensimmainen luku: ";
    cin >> a;

    cout << "Anna toinen luku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);
    retsum(a,b);
    int summa = retsum(a, b);
    cout << "palautettu summa: " << summa << endl;
    try {
        float tulos = returndiv(a, b);
        cout << fixed << setprecision(2) << "palautettu osamaara: " << tulos << endl;
    }
    catch(const runtime_error& e){
        cout << e.what() << endl;
    }
    return 0;
}

void calcSum(int a, int b){

    int sum = a + b;
    cout << "Summa on " << sum << endl;
}

void calcDiv(int a, int b){

    if(b == 0){
        cout << "Jakajana ei saa olla nolla" << endl;
        return;
    }
    float div = static_cast<float>(a)/b;
    cout << fixed << setprecision(2) << "Jakolaskun tulos " << div << endl;
}
int retsum(int a, int b){
    int tulos = a + b;
    return tulos;
}
float returndiv(int a, int b){
    if(b == 0){
        throw runtime_error("Jakaja ei saa olla nolla");
    }
    float div = static_cast<float>(a)/b;
    return div;

}
