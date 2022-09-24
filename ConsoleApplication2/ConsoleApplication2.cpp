// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

string operator * (string a, int b) {
    string output = "";
    while (b--) {
        output += a;
    }
    return output;
}
int pripisat1(int a, string c = "1")
{
    string b = to_string(a);
    b = b + c;
    a = stoi(b);
    return a;
}
int plus3(int a, int b = 3) {
    a += b;
    return a;
}
string asd(int a, int b)
{
    string scet;
    string plus3a = "2";
    while ((b - a) % 3 == 0) {
        a = pripisat1(a);
        scet += "1";
        if (a > b)
        {
            return "its imposible";
        }
    }
    
    scet += plus3a * (((b - a) / 3));
    scet += plus3a;
    scet += to_string((((b - a) / 3)));
    return scet;

}
int main()
{
    int a = 0;
    a = pripisat1(a);
    std::cout << asd(0, 152834);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
