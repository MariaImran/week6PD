#include <iostream>
using namespace std;
void findBorder(int height, int x_coordinate, int y_coordinate);
main()
{
    int height, x_coordinate, y_coordinate;
    cout << "Enter height:";
    cin >> height;
    cout << "Enter x_coordinate:";
    cin >> x_coordinate;
    cout << "Enter y_coordinate:";
    cin >> y_coordinate;
    findBorder(height, x_coordinate, y_coordinate);
}
void findBorder(int height, int x_coordinate, int y_coordinate)
{
    int width, length;
    width = height * 3;
    length = height * 4;
    if((x_coordinate == 0 || x_coordinate == height) && (y_coordinate >= 0 || y_coordinate == height))
    {
        cout << "border";
    }
    if((x_coordinate > width) || (y_coordinate > length))
    {
       cout << "outside";
    }
    if((x_coordinate > 0 && x_coordinate < width) && (y_coordinate > 0 && y_coordinate < height))
    {
        cout << "inside";
    }
    if((x_coordinate > height && x_coordinate < width) && (y_coordinate > 0 && y_coordinate < length))
    {
        cout << "inside";
    }
    else
    {
        cout << "outside";
    }
}