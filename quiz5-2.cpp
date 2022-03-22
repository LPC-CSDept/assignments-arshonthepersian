#include <iostream>
#include <string>
#include <ctime>
#include <math.h>
#include <fstream>
using namespace std;

int main()
{
        try
        {
                ifstream inFile;

                inFile.open("employee.txt");
                if (inFile)
                {
                        cout << "This file already exists.Would you like to overwrite (Y/N) ";
                        char overwrite;
                        cin >> overwrite;
                        if (overwrite == 'Y' || overwrite == 'y')
                        {
                                inFile.close();
                                ofstream outfile;
                                outfile.open("employee.txt");
                                cout << "Please enter all 5 employee id sex(M/F) Hourly wage Years with company one by one\n";

                                for (int i = 0; i < 5; i++)
                                {
                                        string id;
                                        int year;
                                        int hourly;
                                        char sex;
                                        cin >> id >> sex >> hourly >> year;
                                        outfile << id << " " << sex << " " << hourly << " " << year << "\n";
                                }
                                outfile.close();
                        }
                        else
                                return 0;
                }
                else
                {
                        inFile.close();
                        ofstream outfile;
                        outfile.open("employee.txt");
                        cout << "Please enter all 5 employee id sex(M/F) Hourly wage Years with company one by one\n";

                        for (int i = 0; i < 5; i++)
                        {
                                string id;
                                int year;
                                int hourly;
                                char sex;
                                cin >> id >> sex >> hourly >> year;
                                outfile << id << " " << sex << " " << hourly << " " << year;
                        }
                        outfile.close();
                }
        }
        catch (std::ifstream::failure e)
        {
                std::cerr << "Exception opening/reading/closing file\n";
        }
}