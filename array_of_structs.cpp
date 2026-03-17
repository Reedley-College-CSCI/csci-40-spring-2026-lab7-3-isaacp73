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
void readTemperatures(TemperatureRecord data[]);
void printTemperatures(const TemperatureRecord data[]);
TemperatureRecord findMin(const ???);
TemperatureRecord findMax(const ???);
double findAverage(const TemperatureRecord data[]);

int main() {
    TemperatureRecord data[MAX_DAYS];
    
    int size = 0;  // Actual number of records read

    readTemperatures(data);

    printTemperatures(data);

    cout << endl;

    // TODO: Step 5 - Compute and display min, max, and average temperature
    findAverage(data);
    

    return 0;
}

void readTemperatures(TemperatureRecord data[]) {
    ifstream dataFile;

    dataFile.open("temps.txt");

    if (!dataFile) {
        cout << "File did not open" << endl;
        return;
    }

    int size = 0;
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


// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
double findAverage (TemperatureRecord data[]) {
    double total;

    int size = 0;
    while (total += data[size].temperature)
        size++;

    return (total / static_cast<double> (size));
}