#include <iostream>
#include <conio.h>
#include <chrono>

using namespace std;

int main()
{
    setlocale(0, "rus");
    int inputDay = 0;

    while (true)
    {

        cout << "Введите день недели (Понидельник-1; Вторник-2; Среда-3; Четверг-4; Пятница-5; Субота-6; Воскресение-7;";
        cin >> inputDay;

        switch (inputDay)
        {
        case 1:
            cout << "завтрак" << endl;
            cout << "учеба" << endl;
            cout << "обед,ужин" << endl;
            cout << "сон" << endl;
            break;
        case 2:
            cout << "завтрак" << endl;
            cout << "учеба,обед," << endl;
            cout << "ужин" << endl;
            cout << "сон" << endl;
            break;
        case 3:
            cout << "экспрес завтрак" << endl;
            cout << "учеба" << endl;
            cout << "обед,ужин" << endl;
            cout << "сон" << endl;
            break;
        case 4:
            cout << "завтрак" << endl;
            cout << "учеба" << endl;
            cout << "обед,ужин" << endl;
            cout << "сон" << endl;
            break;
        case 5:
            cout << "завтрак" << endl;
            cout << "учеба" << endl;
            cout << "обед,ужин,хоби" << endl;
            cout << "сон" << endl;
            break;
        case 6:
            cout << "завтрак" << endl;
            cout << "отдых" << endl;
            cout << "обед,ужин" << endl;
            cout << "сон до 10.00" << endl;
            break;
        case 7:
            cout << "завтрак" << endl;
            cout << "отдых" << endl;
            cout << "обед,Просмотр jojo bizzare adventure,ужин" << endl;
            cout << "сон" << endl;
            break;
        default:
            cout << "Error!";
            break;
        }

        cout << endl;
    }
}
