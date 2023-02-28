
#include <iostream>
#include <iomanip>
using namespace std;

struct Droby{
    double num1, num2, suma, min, dil, dob;
    Droby(){
        num1 = 0;
        num2 = 0;
        suma = 0;
        min = 0;
        dil = 0;
        dob = 0;
    }
    Droby(double num1, double num2){
        this->num1 = num1;
        this->num2 = num2;
        suma = 0;
        min = 0;
        dil = 0;
        dob = 0;
    }
    void sum(){
        if(num1 > num2){
            suma = num1 + num2;
            cout << "Suma "<< num1 << " and "<< num2<<" = " << suma << endl;
        }
        else if(num2 > num1){
            suma = num2 + num1;
            cout << "Suma "<< num1 << " and "<< num2<<" = " << suma << endl;
        }
    }
    void minus(){
        min = num1 - num2;
        cout << "Riznica "<< num1 << " and "<< num2<<" = " << min << endl;
    }
    void Dobytok(){
        dob = num1 * num2;
        cout << "Dobytok "<< num1 << " and "<< num2<<" = " << dob << endl;
    }
    void Dilenya(){
        dil = num1 / num2;
        cout << "Dilenya "<< num1 << " and "<< num2<<" = " << dil << endl;
    }
};
int main(){
    uint32_t size = 5;
    double num1, num2;
    cout << "Enter first drob: ";
    cin >> num1;
    cout << "Enter second drob: ";
    cin >> num2;
    cout << endl;
    Droby** alldrob = new Droby*[size] {
            new Droby(),
            new Droby(num1, num2),
            new Droby(num1, num2),
            new Droby(num1, num2),
            new Droby(num1, num2),
    };
    alldrob[1]->sum();
    alldrob[2]->minus();
    alldrob[3]->Dobytok();
    alldrob[4]->Dilenya();
    for (size_t i = 0; i < size; i++){
        delete alldrob[i];
    }
    delete [] alldrob;
    return 0;
}