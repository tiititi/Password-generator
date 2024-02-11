#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale>
#include <string>

using namespace std;

char characterGenerator()
{
    return rand() % 94 + 33;
}

string passwordGenerate(int length)
{
    string password;

    for (int i = 0; i < length; ++i)
    {
        char randomChar = characterGenerator();
        password += randomChar;
    }

    return password;
}

int main()
{
    setlocale(LC_ALL, "rus");
    string password;
    int length;
    
    cout << "Введите длину пароля: ";
    cin >> length;
    cout << endl;

    srand(time(0));

    password = passwordGenerate(length);

    cout << "Пароль: " << password << endl;

    return 0;
}
