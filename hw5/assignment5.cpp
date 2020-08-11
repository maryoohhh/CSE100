/*******************************************************************************
 Author: Mary Oh
 Filename: assignment5.cpp
 Specification: This program takes data from a file and calculates for the
                the grades.
 For: CSE 100 - assignment 5
 Time Spent: Days++
*******************************************************************************/

/*******************************************************************************
 1.a    {3 16 19 18 14 6}
        {3 6 19 18 14 16}
        {3 6 14 18 19 16}
        {3 6 14 16 19 18}
        {3 6 14 16 18 19}

 2.a    3 - 5 - 6 - 8
 2.b    12 - 6 - 8
 2.c    10
 2.d    3

 3.a    3
 3.b    4
 3.c    1
 3.d    2
*******************************************************************************/

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{ 
    const int STUDENTS = 100;
    const int HW = 6; 
    
    string fileName;
    string name[STUDENTS];
    
    double score[STUDENTS][HW] = {};
    double min[HW] = {};
    double sum[HW] = {};
    double ave[HW] = {};
    double ave2[STUDENTS] = {};
    double sum2[STUDENTS] = {};
    double stddev;
    
    int counter = 0;
    int agrade[HW] = {};
    
    cout << "Enter the name of the file containing the grade sheet: ";
    cin >> fileName;
    inFile.open(fileName.c_str());
    
    if (!inFile)
    {
        cerr << "Could not open file.";
        exit(EXIT_FAILURE);
    }

    while (counter < STUDENTS && !inFile.eof())
    {
        getline(inFile, name[counter]);
        
        for (int n = 0; n < HW; n++)
            {
                inFile >> score[counter][n];
            }
        
        inFile >> ws;
        
        counter++;
    }
    
    if (!inFile.eof() && counter == STUDENTS)
	cout << "Reached limit of numbers that can be hold. Data Lost.\n";

    inFile.close();
    
    for (int i = 0; i < counter; i++)
    {
	min[i] = score[i][0];
	
        for (int n = 0; n < HW; n++)
	{
            sum[i] += score[i][n];
            
            if (score[i][n] < min[i])
		min[i] = score[i][n];
	}
    }
    
    cout << endl << right << setw(26) << "Class Report" << endl << endl;
    cout << left << setw(18) << "Name" << left << setw(8) << "HW 1" << left
            << setw(8) << "HW 2" << left << setw(8) << "HW 3" << left << setw(8)
            << "HW 4" << left << setw(8) << "HW 5" << left << setw(8) << "HW 6"
            << left << setw(8) << "AVE" << endl;
    
    for (int i = 0; i < counter; i++) 
    {
	cout << left << setw(18) << name[i];
		
        for (int n = 0; n < HW; n++)
	{
            cout << fixed << setprecision(1);
            cout << left << setw(8) << score[i][n];
			
            if (score[i][n] > 18)
		agrade[i]++;
	}
		
        ave[i] = (sum[i]-min[i]) / (HW-1);
	cout << ave[i] << endl;
    }
    
    for (int i = 0; i < HW; i++)
    {
	ave2[i] = sum2[i] / static_cast<double>(counter);
	cout << left << setw(8) << ave2[i];
    }

    cout << endl << left << setw(18) << "Num A's";
	
    for (int i = 0; i < HW; i++)
    {
	cout << left << setw(8) << agrade[i];
    }
    
    for (int i = 0; i < HW; i++)
    {
	stddev = sqrt (sum((score[i][j] – ave[j])^2)/counter);
	cout << left << setw(8) << stddev;
    } 
	
    return 0;
}

/*******************************************************************************
 PS I can't go further or check it because it's giving me and error message. I'm
 using NetBeans on Mac.
 ******************************************************************************/