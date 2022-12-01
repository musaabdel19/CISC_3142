#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
#define row 9
#define col 3

int main() {
  // setup to open data file
  ifstream inputFile;
  fstream outfile;
  string fileName, line, split, temp;

  int counter = 0;
  char delim = ',';
  fileName = "temp.txt";

  vector<string> months;
  vector<int> monthlyTemp;
  vector<int> Avg; // holds moving average
  vector<int> wAvg; // holds weighted moving average

  vector<vector<int>> temp_data;
  inputFile.open(fileName);
  if(inputFile.fail()) {
    cout << "Unable to open " << fileName << endl;
    return 1;
  }

  while(getline(inputFile, line)) {
    istringstream ss(line);
    counter = 0;
    while(getline(ss, split, delim)) {
      if(counter == 0) {
	months.push_back(split);
      }
      else if(counter == 1) {
	temp = split;
	monthlyTemp.push_back(stoi(temp));
	Avg.push_back(0);
	wAvg.push_back(0);
      }
      counter += 1;
    }
  }
  
  for(int i = 0; i < row; i++) {
    vector<int> v;
    for(int j = 0; j < col; j++) {
      v.push_back(monthlyTemp.at(i));
      v.push_back(Avg.at(i));
      v.push_back(wAvg.at(i));
    }
    temp_data.push_back(v);
  }

  int totalTemp = 0;
  float avgTemp = 0;
  int mAvgTotal = 0;
  // finds total average
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      if(j == 0) {
	totalTemp += temp_data[i][j];
      }
    }
  }

  int AvgCount = 3; // moving avg count
  double mTempTotal = 0; // moving temp
  double wTempTotal = 0; // weighted moving temp
  double mAvg = 0; // moving avg
  double wmAvg = 0; // weighted moving avg
  double wCount = 0; // weightage

  for(int i = 0; i <= (row - AvgCount); i++) {
    mTempTotal = 0;
    wCount = 0;
    wTempTotal = 0.0;
    for(int j = i; j < i + AvgCount; j++) {
      mTempTotal += temp_data[j][0];
      wCount += 1;
      wTempTotal += (wCount) * (temp_data[j][0]);
    }
    // finds moving avg
    mAvg = mTempTotal / AvgCount;
    mAvg = round(mAvg);
    mAvg = int(mAvg);
    // finds weighted moving avg
    wmAvg = wTempTotal / 6;
    wmAvg = round(wmAvg);
    wmAvg = int(wmAvg);
    temp_data[i+2][1] = mAvg;
    temp_data[i+2][2] = wmAvg;
  }

  string headerLine = "Month\t\tTemperature\tMovingAverage\tWeightedMovingAverage";
  string detail = "";
  cout << headerLine;
  string outFileName;
  outFileName = "tempdataoutput.txt";

  outfile.open(outFileName, ios::out);
  if(!outfile) {
    cout << "Unable to open output file" << endl;
  }

  outfile << headerLine;

  for(int i = 0; i < row; i++) {
    detail += months[i] + "\t\t";
    for(int j = 0; j < col; j++) {
      detail += to_string(temp_data[i][j]) + "\t\t";
    }
    outfile << endl;
    cout << endl;
    outfile << detail;
    cout << detail;
    detail = "";
  }
  cout << "Avg Temp is: " << totalTemp / (float)row << endl;
  outfile << "\n Avg Temp is: " << totalTemp/ (float)row << endl;	
}
