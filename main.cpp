
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

struct tochka{
    double x, y,sum;
    int row ;
    char znak = '*';
    tochka(){
        x=0;
        y=0;
        row=11;
        sum=0;
    }
    tochka(double x, double y){
        this->x = x;
        this->y = y;
        row =11;
        sum=0;
    }
    void sumdistance(){
        if(x>y){
            for (int k = y; k <=x ; ++k) {
                sum+=k;
            }
        }
        else if(x<y){
            for (int k = x; k <=y ; ++k) {
                sum+=k;
            }
        }
        cout <<"the distance between the two points is equal to "<< sum;
    }
};
int main(){
    uint32_t size = 2;
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << endl;
    tochka** func = new tochka*[size] {
            new tochka(),
            new tochka(x, y),
    };
    func[1]->sumdistance();
    for (size_t i = 0; i < size; i++){
        delete func[i];
    }
    delete [] func;
    return 0;
}