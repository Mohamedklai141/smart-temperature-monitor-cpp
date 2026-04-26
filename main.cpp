#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    srand(time(0));

    int minTemp, maxTemp;
    vector<int> readings;

    cout << "=== Smart Temperature Monitoring System ===" << endl;

    cout << "Enter minimum temperature: ";
    cin >> minTemp;

    cout << "Enter maximum temperature: ";
    cin >> maxTemp;

    for (int i = 1; i <= 10; i++) {
        int temp = rand() % 21 + 15;
        readings.push_back(temp);

        cout << "Reading " << i << ": " << temp << " C -> ";

        if (temp > maxTemp) {
            cout << "ALERT: Temperature too HIGH!" << endl;
        }
        else if (temp < minTemp) {
            cout << "ALERT: Temperature too LOW!" << endl;
        }
        else {
            cout << "Status: Normal" << endl;
        }
    }

    int sum = 0;
    int maxValue = readings[0];
    int minValue = readings[0];

    for (int value : readings) {
        sum += value;

        if (value > maxValue) {
            maxValue = value;
        }

        if (value < minValue) {
            minValue = value;
        }
    }

    double average = (double)sum / readings.size();

    cout << "\n=== Analysis ===" << endl;
    cout << "Average temperature: " << average << " C" << endl;
    cout << "Maximum temperature: " << maxValue << " C" << endl;
    cout << "Minimum temperature: " << minValue << " C" << endl;

    cout << "\nMonitoring finished." << endl;

    return 0;
}
