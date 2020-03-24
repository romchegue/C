#include <iostream>
#include <string>
using namespace std;


int NumCounter(string str)
{
    int result = 0;
    int subtracted = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if ((int)str[i] == 0)
        {
            cout << "END OF STRING!!!" << endl;
            break;
        }
        else if (str[i] >= 48 && str[i] <= 57)       // 0-9
        {
            subtracted = 48;
        }
        else if (str[i] >= 65 && str[i] <= 90)       // A-Z
        {
            subtracted = 64;
        }
        else if (str[i] >= 97 && str[i] <= 122)       // a-z
        {
            subtracted = 96;
        }
        else
        {
            cout << "[ERROR!] Invalid name entered!" << endl;
        }

        result += ((int)str[i] - subtracted) / 10 + ((int)str[i] - subtracted) % 10;
    }

    while (result > 9)
    {
        result = result / 10 + result % 10;
    }

    cout << endl;
    return result;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    
    string dateOfBirth;
    string name;
    char taroArray[9][20]{ "1 - Маг\0", "2 - Жрица\0", "3 - Императрица\0",
                          "4 - Император\0", "5 - Жрец\0", "6 - Влюблённые\0",
                          "7 - Колесница\0", "8 - Сила\0", "9 - Отшельник\0" };
    
    cout << endl << "Введите дату рождения БЕЗ ПРОБЛЕЛОВ (пример: 01051994):" << endl;
    cin >> dateOfBirth;   
    
    cout << endl;
    cout << "Введите числа имени подряд БЕЗ ПРОБЕЛОВ согласно таблице ниже.\nНапример, для имени Иван (10,3,1,15) будет: 103115\n" << endl;
    cout << "А 1\tБ 2\tВ 3\tГ 4\tД 5\tЕ 6\tЁ 7" << endl;
    cout << "Ж 8\tЗ 9\tИ 10\tЙ 11\tК 12\tЛ 13\tМ 14" << endl;
    cout << "Н 15\tО 16\tП 17\tР 18\tС 19\tТ 20\tУ 21" << endl;
    cout << "Ф 22\tХ 23\tЦ 24\tЧ 25\tШ 26\tЩ 27\tЪ 28" << endl;
    cout << "Ы 29\tЬ 30\tЭ 31\tЮ 32\tЯ 33" << endl << endl;
    cin >> name;
    
    cout << "========================================";
    cout << "Число даты рождения:\t" << taroArray[NumCounter(dateOfBirth) - 1] << endl;
    cout << "Число имени        :\t" << taroArray[NumCounter(name) - 1] << endl;
    cout << "========================================" << endl << endl;
    system("pause");
	return 0;
}