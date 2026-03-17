#include <iostream>
#include <fstream>
using namespace std;

struct TemperatureRecord {
    int day;
    int temperature;
};

// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(TemperatureRecord data[]); // TODO: Fix the parameters
void printTemperatures(const ???);
TemperatureRecord findMin(const ???);
TemperatureRecord findMax(const ???);
double findAverage(const ???);

int main() {
    TemperatureRecord data[MAX_DAYS];
    
    int size = 0;  // Actual number of records read

    readTemperatures(data);

    // TODO: Step 4 - Print the temperatures

    // TODO: Step 5 - Compute and display min, max, and average temperature

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
} 

// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array

// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
