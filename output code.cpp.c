#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    int Total_flights, Total_additional_stops;

  // Create output text file
  ofstream outputFile("accra-winnipeg_output.txt");

  // Write to output text file
  output = IATA + "from" + IATA_code + "to" + IATA_code + Stops + "stops";
  outputFile << output << endl;
  outputFile << "Total flights: " << Total_flights << endl;
  outputFile << "Total additional stops: " << Total_additional_stops;

  // Close output text file
  outputFile.close();

  // Create a text string, which is used to output the text file
  string output_info;

  // Read from the text file
  ifstream read_outputFile("accra-winnipeg_output.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (read_outputFile, output_info)) {
    // Output the text from the file
    cout << output_info;
  }

  // Close the file
  read_outputFile.close();
}
