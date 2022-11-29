#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

//Read necessary contents from data files
int main() {

// Reading from the routes file
  ifstream read_routesFile("routes.csv");

  // Write to output file
  ofstream open_routesFile("accra-winnipeg_output.txt");

  string Stops;
  // Use a while loop together with the getline() function to read routes file line by line
  while (getline (read_routesFile, Stops)) {

      string Stops;

    // Output data from routes file
    cout << Stops;
  }

  // Close routes file
  read_routesFile.close();
}
