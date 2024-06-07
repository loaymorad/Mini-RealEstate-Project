#include <iostream>
#include <string>

using namespace std;

// structs

struct address {
	string streetName;
	string district;
};

struct flat {
	address add;
	string view;
	float area;
	int price;
};

// functions
void inputData(flat* flats, int n);
void calcPrice(flat* flats, int n);
void displayFlats(flat* flats, int n, float minArea, float maxArea);



int main() {
	int n;
	cout << "Enter the number of flats";
	cin >> n;
	flat* flats = new flat[n];


	inputData(flats, n);
	calcPrice(flats, n);
	
	float minArea, maxArea;
	cout << "enter range";
	cin >> minArea >> maxArea;
	displayFlats(flats, n, minArea, maxArea);

	delete [] flats;
	flats = NULL;

	return 0;
}

void inputData(flat *flats, int n) {
	
	for (int i = 0; i < n; i++)
	{
		cout << "FLAT " << i + 1 << endl;
		
		cout << "Enter Adress Info (district then street): ";
		cin >> flats[i].add.district >> flats[i].add.streetName;

		cout << "Enter View ";
		cin >> flats[i].view;

		cout << "Enter area: ";
		cin >> flats[i].area;
	}	
}

void calcPrice(flat* flats, int n) {
	
	for (int i = 0; i < n; i++)
	{
		if (flats[i].view == "Main")
		{
			flats[i].price = flats[i].area * 8000;
		}
		else
		{
			flats[i].price = flats[i].area * 5000;
		}

	}
}

void displayFlats(flat * flats, int n, float minArea, float maxArea) {

	cout << "District" << "\t" << "Sreet" << "\t" << "View" << "\t" << "Area" << "\t" << "Price";
	cout << ".................................................";
			
	for (int i = 0; i < n; i++)
	{
		if (flats[i].area >= minArea && flats[i].area <= maxArea) {
			cout << flats[i].add.district << flats[i].add.streetName << flats[i].view << flats[i].area << flats[i].price << endl;
		}
	}

}
