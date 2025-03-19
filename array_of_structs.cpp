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
void readTemperatures( TemperatureRecord records[], int&);
void printTemperatures(const TemperatureRecord records[], int&);
TemperatureRecord findMin(const TemperatureRecord records[], int&);
TemperatureRecord findMax(const TemperatureRecord records[], int&);
double findAverage(const TemperatureRecord records[], int&);

int main() {
    // TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size
	TemperatureRecord records[MAX_DAYS];
	

	
	 
   


    
    int size = 0;  // Actual number of records read


    // TODO: Step 3 - Call readTemperatures() to load data from file
	readTemperatures(records, size);
	

	// TODO: Step 4 - Print the temperatures
	printTemperatures(records, size);
	

    // TODO: Step 5 - Compute and display min, max, and average temperature
	cout << "Min temperature: " << findMin(records, size).temperature << endl;
	cout << "Max temperature: " << findMax(records, size).temperature << endl;
	cout << "Average temperature: " << findAverage(records, size) << endl;
	


    return 0;
}


// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array
void readTemperatures( TemperatureRecord records[], int& size) {
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

void printTemperatures(const TemperatureRecord records[], int& size) {
	cout << "Day Temperature" << endl;
	for (int i = 0; i < size; i++) {
		cout << records[i].day << " " << records[i].temperature << endl;
	}
}

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature
TemperatureRecord findMin(const TemperatureRecord records[], int& size) {
	TemperatureRecord min = records[0];
	for (int i = 1; i < size; i++) {
		if (records[i].temperature < min.temperature) {
			min = records[i];
		}
	}
	return min;
}



// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature
TemperatureRecord findMax(const TemperatureRecord records[], int& size) {
	TemperatureRecord max = records[0];
	for (int i = 1; i < size; i++) {
		if (records[i].temperature > max.temperature) {
			max = records[i];
		}
	}
	return max;
}

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
double findAverage(const TemperatureRecord records[], int& size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += records[i].temperature;
	}
	return sum / size;
}
