# Mini-RealEstate-Project

## Overview

The Mini-RealEstate-Project is a simple console application written in C++ that allows users to input details about a set of flats, calculates the price of each flat based on its view and area, and displays the flats that fall within a specified area range.

## Features

- Input details of multiple flats, including address, view, and area.
- Calculate the price of each flat based on its view and area.
- Display flats within a specified area range.

## Structs

### `address`
- `string streetName`
- `string district`

### `flat`
- `address add`
- `string view`
- `float area`
- `int price`

## Functions

### `void inputData(flat* flats, int n)`
Prompts the user to input details for `n` flats.

### `void calcPrice(flat* flats, int n)`
Calculates the price of each flat based on its view and area. The price is calculated as follows:
- If the view is "Main", the price is `area * 8000`
- Otherwise, the price is `area * 5000`

### `void displayFlats(flat* flats, int n, float minArea, float maxArea)`
Displays the details of the flats that have an area within the specified range.

## Usage

1. Clone the repository or download the source code.
2. Compile the code using a C++ compiler.
3. Run the executable.

```sh
g++ -o MiniRealEstateProject MiniRealEstateProject.cpp
./MiniRealEstateProject
```

4. Follow the prompts to input the number of flats, their details, and the area range for display.

## Sample Input/Output

```
Enter the number of flats: 3

FLAT 1
Enter Address Info (district then street): Downtown MainSt
Enter View: Main
Enter area: 1200

FLAT 2
Enter Address Info (district then street): Suburb GreenAve
Enter View: Side
Enter area: 900

FLAT 3
Enter Address Info (district then street): CityCenter HighSt
Enter View: Main
Enter area: 1500

Enter range: 1000 1600

District    Street      View    Area    Price
.................................................
Downtown    MainSt      Main    1200    9600000
CityCenter  HighSt      Main    1500    12000000
```

## License

This project is licensed under the MIT License.

---
