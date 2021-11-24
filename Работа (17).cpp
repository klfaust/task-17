#include <iostream>
using namespace std;



double Calculate(double n1, double n2, char act)
{
    switch (act)
    {
        case '+': return n1 + n2;
        case '-': return n1 - n2;
        case '*': return n1 * n2;
        case '/': return n1 / n2;
        case '^': return pow(n1, n2);
        case '@': return (n1 + n2) / 2;
        case '&': return sqrt(n1 * n2);
        case '?': return 228;
        default: return -1;
    }
}

int main()
{
    setlocale(0, "");

    cout << "Хочешь поиздеваться над числами? y/n\n";
    char qwe;
    cin >> qwe;

    while (qwe == 'y')
    { 
        cout << "\n[Список команд] \n";
        cout << "[число 1] [действие] [число 2] \n";
           cout << "[+] сложение\n";
        cout << "[-] вычитание\n";
        cout << "[*] умножение\n";
        cout << "[/] деление\n";
        cout << "[^] возведение в степень \n";
        cout << "[@] среднее арифметическое\n";
        cout << "[&] среднее геометрическое\n";
        cout << "[?] вечный снюсоед....\n";

        double a, b;
        char c;

        cin >> a;
        cin >> c;
        cin >> b;

        cout << Calculate(a, b, c);

        cout << "\n\nЕще раз? y/n\n";
        cin >> qwe;
    }

    cout << "\nНет так нет)";

    int _; cin >> _;
    


}