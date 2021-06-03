#include <iostream>
#include <exception>
#include "InvalidDateException.cpp"
using namespace std;
string *splitString(string str)
{
    string *arr = new string[25];
    int i = 0;
    string delimiter = "/";
    size_t pos = 0;
    string token;
    while ((pos = str.find(delimiter)) != string::npos)
    {
        token = str.substr(0, pos);
        arr[i] = token;
        str.erase(0, pos + delimiter.length());
        i++;
    }
    arr[i] = str;
    return arr;
}
int main()
{
    int num;
    cout << "Enter the number of events" << endl;
    cin >> num;
    int countq1 = 0;
    int countq2 = 0;
    int countq3 = 0;
    int countq4 = 0;
    string *arr;
    string date;

    for (int i = 1; i <= num; i++)
    {
        cout << "Enter the date of event " << i << " in dd/mm/yyyy format" << endl;
        cin >> date;
        arr = splitString(date);
        int day, month, year;
        day = stoi(arr[0]);
        month = stoi(arr[1]);
        year = stoi(arr[2]);
        if (day >= 1 and day <= 31 and month >= 1 and month <= 12 and year == 2017) //date is valid
        {
            if (month >= 1 and month <= 3)
                countq1++;
            else if (month >= 4 and month <= 6)
                countq2++;
            else if (month >= 7 and month <= 9)
                countq3++;
            else
                countq4++;
            continue;
        }
        else
        {
            try
            {
                throw InvalidDateException();
            }
            catch (InvalidDateException obj)
            {
                cout << obj.what() << endl;
                --i;
                continue;
            }
        }
    }
    cout << "Number of events in first quarter: " << countq1 << endl;
    cout << "Number of events in second quarter: " << countq2 << endl;
    cout << "Number of events in third quarter: " << countq3 << endl;
    cout << "Number of events in fourth quarter: " << countq4 << endl;
}
