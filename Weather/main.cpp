#include <iostream>

using namespace std;

int main() {
    int n;
    double temperature[n];
    double humidity[n];
    double totalTemperature = 0.0;
    double totalHumidity = 0.0;

    cout<<"Enter The Number Of Days For Taking Temperature & Humidity: ";
    cin>>n;

    for (int i = 0; i < n; i++) {
        cout << "Enter temperature for day " << (i + 1) << ": ";
        cin >> temperature[i];
        cout << "Enter humidity for day " << (i + 1) << ": ";
        cin >> humidity[i];
    }

    for (int i = 0; i < n; i++) {
        totalTemperature += temperature[i];
        totalHumidity += humidity[i];
    }

    double averageTemperature = totalTemperature / n;
    double averageHumidity = totalHumidity / n;

    cout << "Average Temperature: " << averageTemperature << " degrees" << endl;
    cout << "Average Humidity: " << averageHumidity << "%" << endl;

    return 0;
}
