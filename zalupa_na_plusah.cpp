#include <iostream>
using namespace std;
class holidays
{
public:
    string Hd[7]{ "w","e","r","t","y","u","i" };
};
int main()
{
    setlocale(LC_ALL, "Russian"); // Русская локализация консоли
    holidays A;
    string Sth;
    int day = 0;
    for (int attempt = 0; attempt < 7; attempt++)
    {
        cout << "\nвведите день недели: ";
        cin >> day;
        if (day <= 0, day > 7)
        {
            cout << "\nвы ввели неправильное число";
            continue;
        }
        for (int i = 0; i < 7; i++)
            if (A.Hd[day - 1] == "null")
            {
                cout << "\nвы уже посетили этот праздник";
                break;
            }
            else if (A.Hd[i] == "null")
            {
                continue;
            }
            else
            {
                if (i == day - 1)
                {
                    cout << "Cегодня вы посетили - " << A.Hd[i] << "\nВам осталось посетить: \n";
                }
                cout << A.Hd[i] << " , ";
            }
        cout << "\nжелаете закончить? Y-да, N-нет\n";
        cin >> Sth;
        if (Sth == "Y")
        {
            return 0;
        }
        A.Hd[day - 1] = "null";
    }
    return 0;
}