#include <iostream>
#include <iomanip>

using namespace std;

struct Circle {
    float radius;
};

struct Rectangle {
    float length;
    float height;
};

struct Square {
    float length;
    float height;
};



float CalCircleArea(Circle c1);
float CalRectangleArea(Rectangle r1);
float CalSquareArea(Square s1);
float CalCost(int CostUnit, float peri);

int main() {
    struct Circle pond;
    //pond.radius = 5;

    struct Square squarebuilding;
    //squarebuilding.length = 4;

    struct Rectangle recbuilding;
    //recbuilding.length = 3;
    //recbuilding.height = 7;

    cout << "Enter the radius of the pond: ";
    cin >> pond.radius;

    cout << "Enter the length of squra building: ";
    cin >> squarebuilding.length;

    cout << "Enter the length of rectangle building: ";
    cin >> recbuilding.length;

    cout << "Enter the height of rectangle building: ";
    cin >> recbuilding.height;

    float pondArea, squareArea ,rectangleArea,yardArea,greenArea;

    pondArea = CalCircleArea(pond);
    squareArea = CalSquareArea(squarebuilding);
    rectangleArea = CalRectangleArea(recbuilding);

    yardArea = 15 * 28;
    greenArea = yardArea - (pondArea + squareArea + rectangleArea);

    cout << "Area of the pond : "<<setiosflags(ios::fixed) << setprecision(3) << pondArea << endl;
    cout << "Area of the Square : " << squareArea << " m" <<endl;
    cout << "Area of the pond : " << rectangleArea << " m" <<endl;
    cout << "Area of the yard area : " << yardArea << " m" <<endl;
    cout << "Area of the Green area : " << greenArea << " m" <<endl;

    return 0;
}


float CalCircleArea(Circle c1) {
    return (22.0 / 7.0) * c1.radius * c1.radius;
}

float CalRectangleArea(Rectangle r1) {
    return r1.length * r1.height;
}

float CalSquareArea(Square s1) {
    return s1.length * s1.length;
}

float CalCost(int CostUnit,float peri) {

    
}