//Its a program that uses two-dimensional array to store the highest and lowest temperatures//

#include <iostream>

using namespace std;

const int NO_OF_MONTHS = 12;
void getData(int twoDim[][2], int rows);
int averageHigh(int twoDim[][2], int rows);
int averageLow(int twoDim[][2], int rows);
int indexHighTemp(int twoDim[][2], int rows);
int indexLowTemp(int twoDim[][2], int rows);
int main()
{
 int hiLowArray[NO_OF_MONTHS][2];
 int indexHigh;
 int indexLow;
 getData(hiLowArray, NO_OF_MONTHS);
 cout << "Average high temperature: "
 << averageHigh(hiLowArray, NO_OF_MONTHS) << endl;
 cout << "Average low temperature: "
 << averageLow(hiLowArray, NO_OF_MONTHS) << endl;
 indexHigh = indexHighTemp(hiLowArray, NO_OF_MONTHS);
 cout << "Highest temperature: " << hiLowArray[indexHigh][0] << endl;
 indexLow = indexLowTemp(hiLowArray, NO_OF_MONTHS);
 cout << "Lowest temperature: " << hiLowArray[indexLow][1] << endl;
 return 0;
}
//This Function reads and stores data in the two-dimensional array//
void getData(int twoDim[][2], int rows)
{
 int i;
 cout << "Enter high temperature for each month" << endl;
 for (i = 0; i < rows; i++)
 cin >> twoDim[i][0];
 cout << "Enter low temperature for each month" << endl;
 for (i = 0; i < rows; i++)
 cin >> twoDim[i][1];
}
//This function calculates and returns the average high temperature for the year.//
int averageHigh(int twoDim[][2], int rows)
{
 int i;
 int sum = 0;
 for (i = 0; i < rows; i++)
 sum = sum + twoDim[i][0];
 if (rows > 0)
 return sum / rows;
 else
 return 0;
}
// This function calculates and returns the average low temperature for the year//
int averageLow(int twoDim[][2], int rows)
{
 int i;
 int sum = 0;
 for (i = 0; i < rows; i++)
 sum = sum + twoDim[i][1];
 if (rows > 0)
 return sum / rows;
 else
 return 0;
}
//This function returns the index of the highest high temperature in the array.//
int indexHighTemp(int twoDim[][2], int rows)
{
 int i;
 int highIndex = 0;
 for (i = 1; i < rows; i++)
 if (twoDim[highIndex][0] < twoDim[i][0])
 highIndex = i ;
 return highIndex;
}
// This function returns the index of the lowest low temperature in the array.//
int indexLowTemp(int twoDim[][2], int rows)
{
 int i;
 int lowIndex = 0;
 for (i = 1; i < rows; i++)
 if (twoDim[lowIndex][1] > twoDim[i][1])
 lowIndex = i ;
 return lowIndex;
}

