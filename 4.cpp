#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE, "Rus");
    int day;
    cout << "Введите один из дней недели:"; cin >> day;
    if ((day == 1) || (day == 2) || (day == 3) || (day == 4))
        cout << "В этот день я работаю." << endl;
    else if (day == 5)
        cout << "В этот день после работы я занимаюсь хоби" << endl;
    else if ((day == 6) || (day == 7))
        cout << "В этот день я отдыхаю." << endl;
    system("pause");
    return 0;
}
