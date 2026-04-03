#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    switch(n){
        case 1:
        case 2:
            cout << "Плохо"; break;
        case 3:
            cout << "Удовлетворительно"; break;
        case 4:
            cout << "Хорошо"; break;
        case 5:
            cout << "Отлично"; break;
        default:
            cout << "Ошибка"; break;
    }


    return 0;
}
