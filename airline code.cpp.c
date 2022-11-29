#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

//Read necessary contents from data files
int main() {

  // Reading from the airlines file
  ifstream read_airlinesFile("airlines.csv");

  // Write to output file
  ofstream open_airlinesFile("accra-winnipeg_output.txt");

  string IATA;
  // Use a while loop together with the getline() function to read airlines file line by line
  while (getline (read_airlinesFile, IATA)) {

      string IATA;

    // Output data from airlines file
    cout << IATA;
  }

  // Close airlines file
  read_airlinesFile.close();
}
