#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct TemperatureRecord {
    int day;
    int temperature;
};

// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(TemperatureRecord data[], int& size);
void printTemperatures(const TemperatureRecord data[]);
TemperatureRecord findMin(const TemperatureRecord data[], int size);
TemperatureRecord findMax(const TemperatureRecord data[], int size);
double findAverage(const TemperatureRecord data[], int size);

int main() {
    TemperatureRecord data[MAX_DAYS];
    
    int size = 0;  // Actual number of records read

    readTemperatures(data, size);

    printTemperatures(data);

    cout << endl;

    findAverage(data, size);


    cout << "The max is on day " << findMax(data, size).day << " and is " << findMax(data, size).temperature << " degrees\n";

    cout << "The min is on day " << findMin(data, size).day << " and is " << findMin(data, size).temperature << " degrees\n";

    return 0;
}

void readTemperatures(TemperatureRecord data[], int& size) {
    ifstream dataFile;

    dataFile.open("temps.txt");

    if (!dataFile) {
        cout << "File did not open" << endl;
        return;
    }

    while (dataFile >> data[size].day && dataFile >> data[size].temperature && size < MAX_DAYS){
        size++;
    }

    dataFile.close();
} 

void printTemperatures (TemperatureRecord data[]) {
    cout << fixed << setw(10) << "Day" << "Temp\n";
    
    int i = 0;
    while (data[i].day && i < MAX_DAYS) {
        cout << fixed << setw (10) << data[i].day << data[i].temperature << endl;
        i++;
    }
}

TemperatureRecord findMax (TemperatureRecord data[], int size) {
    int largestIndex;
    double largest = data[0].temperature;

    for (int i = 0; i < size; i++) {
        if (data[i].temperature > largest) {
            largestIndex = i;
            largest = data[i].temperature;
        }
    }

    return data[largestIndex];
}

TemperatureRecord findMin (TemperatureRecord data[], int size) {
    int smallestIndex;
    double smallest = data[0].temperature;

    for (int i = 0; i < size; i++) {
        if (data[i].temperature < smallest) {
            smallestIndex = i;
            smallest = data[i].temperature;
        }
    }

    return data[smallestIndex];
}

double findAverage (TemperatureRecord data[], int size) {
    double total;

    int i = 0;
    while (total += data[size].temperature && i < MAX_DAYS)
        i++;

    return (total / static_cast<double> (size));
}