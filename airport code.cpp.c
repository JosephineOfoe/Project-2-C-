#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

//Read necessary contents from data files
int main() {

// Reading from the airports file
  ifstream read_airportsFile("airports.csv");

  // Write to output file
  ofstream open_airportsFile("accra-winnipeg_output.txt");

  string IATA_code;
  // Use a while loop together with the getline() function to read airports file line by line
  while (getline (read_airportsFile, IATA_code)) {

      string IATA_code;

    // Output data from airports file
    cout << IATA_code;
  }

  // Close airports file
  read_airportsFile.close();
}
