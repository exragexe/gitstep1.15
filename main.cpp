
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Pryamokytnik{
    double col, row;
    char znak = '*';
    Pryamokytnik(){
        col=0;
        row=0;
    }
    Pryamokytnik(double col, double row){
        this->col = col;
        this->row = row;

    }
    void size(){
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout << znak<<" ";
            }
            cout << endl;

        }
    }

};
int main(){
    uint32_t size = 2;
    double col, row;
    cout << "Enter shiriny pryamokytnika: ";
    cin >> row;
    cout << "Enter dovzhiny pramokytnika: ";
    cin >> col;
    cout << endl;
    Pryamokytnik** func = new Pryamokytnik*[size] {
            new Pryamokytnik(),
            new Pryamokytnik(row, col),

    };
    func[1]->size();
    for (size_t i = 0; i < size; i++){
        delete func[i];
    }
    delete [] func;
    return 0;
}