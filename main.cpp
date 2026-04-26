#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int minTemp, maxTemp;

    cout << "=== Smart Temperature Monitoring System ===" << endl;

    cout << "Enter minimum temperature: ";
    cin >> minTemp;

    cout << "Enter maximum temperature: ";
    cin >> maxTemp;

    cout << "\nMonitoring started...\n"
         << endl;

    for (int i = 1; i <= 10; i++)
    {
        int temp = rand() % 21 + 15;

        cout << "Reading " << i << ": " << temp << " C -> ";

        if (temp > maxTemp)
        {
            cout << "ALERT: Temperature too HIGH!" << endl;
        }
        else if (temp < minTemp)
        {
            cout << "ALERT: Temperature too LOW!" << endl;
        }
        else
        {
            cout << "Status: Normal" << endl;
        }
    }

    cout << "\nMonitoring finished." << endl;

    return 0;
}
