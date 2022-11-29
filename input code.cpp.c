#include <iostream>
#include <fstream>
using namespace std;

int main () {
  // Create a text file
  ofstream inputFile("accra-winnipeg.txt");

  string start_city, start_country, start_citycountry, destination_city, destination_country, destination_citycountry;
  cout << "Enter your start city: ";
  cin >> start_city;
  cout << "Enter your start country: ";
  cin >> start_country;
  start_citycountry = start_city + ", " + start_country;
  cout << start_citycountry <<endl;

  // Write to start city and country to text file
  inputFile << start_citycountry <<endl;

  cout << "Enter your destination city: ";
  cin >> destination_city;
  cout << "Enter your destination country: ";
  cin >> destination_country;
  destination_citycountry = destination_city + ", " + destination_country;
  cout << destination_citycountry <<endl;

  // Write to destination city and country to text file
  inputFile << destination_citycountry;

  // Close input file
  inputFile.close();

  // Create a string to take input in text file
  string input_info;

  // Read from the text file
  ifstream read_inputFile("accra-winnipeg.txt");

  // Use a while loop together with the getline() function to read the input file line by line
  while (getline (read_inputFile, input_info)) {
  }

  // Close the file
  read_inputFile.close();
}
