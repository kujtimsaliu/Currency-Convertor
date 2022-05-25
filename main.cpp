#include <iostream>
#include <cctype>
using namespace std;
int toInt(char *currency)
{
    char toLower[10];
    for (int i = 0; i < 10; i++)
    {
        toLower[i] = tolower(currency[i]);
    }
    if (strcmp(toLower, "euro") == 0)
        return 1;
    if (strcmp(toLower, "dollar") == 0)
        return 2;
    if (strcmp(toLower, "denar") == 0)
        return 3;
    if (strcmp(toLower, "lira") == 0)
        return 4;
    if (strcmp(toLower, "pounds") == 0)
        return 5;
    return 0;
}
void fromEuroTo(int curCur, int toCur, int amount)
{
    switch (toCur)
    {
    case 2:
        cout << amount << " Euro equals " << amount * 1.07 << " US Dollar" << endl;
        break;
    case 3:
        cout << amount << " Euro equals " << amount * 61.58 << " Macedonian Denars" << endl;
        break;
    case 4:
        cout << amount << " Euro equals " << amount * 17.28 << " Turkish Lira" << endl;
        break;
    case 5:
        cout << amount << " Euro equals " << amount * 0.86 << " Pound" << endl;
        break;
    }
}
void fromDollarTo(int currentCurInt, int toCur, int amount)
{
    switch (toCur)
    {
    case 1:
        cout << amount << " Dollar equals " << amount * 0.93 << " Euro" << endl;
        break;
    case 3:
        cout << amount << " Dollar equals " << amount * 57.41 << " Macedonian Denars" << endl;
        break;
    case 4:
        cout << amount << " Dollar equals " << amount * 16.1 << " Turkish Lira" << endl;
        break;
    case 5:
        cout << amount << " Dollar equals " << amount * 0.80 << " Pound" << endl;
        break;
    }
}
void fromDenarTo(int currentCurInt, int toCur, int amount)
{
    switch (toCur)
    {
    case 1:
        cout << amount << " Denar equals " << amount * 0.016 << " Euro" << endl;
        break;
    case 2:
        cout << amount << " Denar equals " << amount * 0.017 << " US Dollar" << endl;
        break;
    case 4:
        cout << amount << " Denar equals " << amount * 0.28 << " Turkish Lira" << endl;
        break;
    case 5:
        cout << amount << " Denar equals " << amount * 0.014 << " Pound" << endl;
        break;
    }
}
void fromLiraTo(int currentCurInt, int toCur, int amount)
{
    switch (toCur)
    {
    case 1:
        cout << amount << " Turkish Lira equals " << amount * 0.058 << " Euro" << endl;
        break;
    case 2:
        cout << amount << " Turkish Lira equals " << amount * 0.062 << " US Dollar" << endl;
        break;
    case 3:
        cout << amount << " Turkish Lira equals " << amount * 3.57 << " Macedonian Denars" << endl;
        break;
    case 5:
        cout << amount << " Turkish Lira equals " << amount * 0.050 << " Pound" << endl;
        break;
    }
}
void fromPoundTo(int currentCurInt, int toCur, int amount)
{
    switch (toCur)
    {
    case 1:
        cout << amount << " Euro equals " << amount * 1.17 << " Euro" << endl;
        break;
    case 2:
        cout << amount << " Euro equals " << amount * 1.25 << " US Dollar" << endl;
        break;
    case 3:
        cout << amount << " Euro equals " << amount * 72.0 << " Macedonian Denars" << endl;
        break;
    case 4:
        cout << amount << " Euro equals " << amount * 20.19 << " Turkish Lira" << endl;
        break;
    }
}

int main()
{
    char currentCur[10], toCur[10];
    int amount;
    cout << "======Curency Convertor======" << endl;
    cout << "Available Currencies: " << endl
         << "1.EURO" << endl
         << "2.DOLLAR(USD)" << endl;
    cout << "3.DENAR(MKD)" << endl
         << "4.Lira(Turkish)" << endl
         << "5.Pound" << endl;

    int currentCurInt = 0;
    do
    {
        cout << "You want to convert from: ";
        cin >> currentCur;
        currentCurInt = toInt(currentCur);
        if (currentCurInt == 0)
            cout << "Wrong Currency.Try Again" << endl;
    } while (currentCurInt == 0);

    cout << "Enter the Amount: ";
    cin >> amount;

    int toCurInt = 0;
    do
    {
        cout << "To: ";
        cin >> toCur;
        toCurInt = toInt(toCur);
        if (toCurInt == 0)
            cout << "Wrong Currency.Try Again" << endl;
    } while (toCurInt == 0);

    cout << "-----------------------" << endl;

    switch (currentCurInt)
    {
    case 1:
        fromEuroTo(currentCurInt, toCurInt, amount);
        break;
    case 2:
        fromDollarTo(currentCurInt, toCurInt, amount);
        break;
    case 3:
        fromDenarTo(currentCurInt, toCurInt, amount);
        break;
    case 4:
        fromLiraTo(currentCurInt, toCurInt, amount);
        break;
    case 5:
        fromPoundTo(currentCurInt, toCurInt, amount);
        break;
    }
}
