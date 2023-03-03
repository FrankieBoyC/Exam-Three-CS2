#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Part One________________________________________________________________________________________________________________________________
struct MyStructure
{
	string name;
	int value1;
	int value2;
};

int main()
{
	//Part One________________________________________________________________________________________________________________________________
	MyStructure myStructure[3];
	ofstream outfile;
	string word, filename;

	filename = "input.txt";
	outfile.open(filename.c_str());

	for (int i = 0; i < 3; i++)
	{
		outfile << word;
		myStructure[i].name = word;
		outfile << word;
		myStructure[i].value1 = stoi(word);
		outfile << word;
		myStructure[i].value2 = stof(word);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << myStructure[i].name << " " << myStructure[i].value1 << " " << myStructure[i].value2 << endl;
	}

	//Part Two_________________________________________________________________________________________________________________________________________
	int myArray1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int myArray2[10];

	ofstream binary_output;
	binary_output.open("binary_output.txt");

	binary_output.write((char*) &myArray1, sizeof(myArray1));
	binary_output.close();

	ifstream in("binary_output.txt", ios::in | ios::binary);
	in.read((char*) &myArray2, sizeof(myArray2));
	in.close();

	cout << "Elements of myArray2:" << myArray2 << endl;
}