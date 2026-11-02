#include <iostream>
#include <iomanip>

using namespace std;
void calcSum(int a, int b);
void calcDiv(int a, int b);
int retsum(int a, int b);
void retdiv(int a, int b);
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
    try {

    }
    catch (const runtime_error& e){
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
        cout << "Jakajana ei saa olla nolla";
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
