#include <iostream>
#include <fstream>
using namespace std;


// TODO: Step 1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.


struct TemperatureRecord{
  int day;
  int temperature;
};



// Constants
const int MAX_DAYS = 31;

// Function Prototypes

 // TODO: Fix the parameters
void readTemperatures(TemperatureRecord[], int&);
void readTemperatures(int);
void printTemperatures(const int);
TemperatureRecord findMin(const int);
TemperatureRecord findMax(const int);
double findAverage(const double);

int main() {
    // TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size
	TemperatureRecord records[MAX_DAYS];
	
	 
   


    
    int size = 0;  // Actual number of records read


    // TODO: Step 3 - Call readTemperatures() to load data from file
	readTemperatures(records, size);
	

	// TODO: Step 4 - Print the temperatures

    // TODO: Step 5 - Compute and display min, max, and average temperature

    return 0;
}


// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array
void readTemperatures(TemperatureRecord records[], int& size) {
	ifstream inputFile;
	inputFile.open("temps.txt");
	if (inputFile.fail()) {
		cout << "Error: Could not open file" << endl;
		return;
	}
	while (inputFile >> records[size].day >> records[size].temperature) {
		size++;
	}
	inputFile.close();
}

// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
