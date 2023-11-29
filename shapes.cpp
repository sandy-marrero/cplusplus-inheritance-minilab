#include <iostream>
#include <string>
#include <cassert>

class Shape
{
private:
    std::string name;

public:
    // Constructor that takes a string parameter to set the name
    Shape(std::string shapeName)
    {
        this->name = shapeName;
    }

    // Virtual function to calculate and return the area (to be overridden by derived classes)
    virtual double area()
    {
        return 0.0;
    }

    // Virtual function to calculate and return the perimeter (to be overridden by derived classes)
    virtual double perimeter()
    {
        return 0.0;
    }

    // Function to print the name of the shape
    void printDetails()
    {
        std::cout << "Name: " << name << std::endl;
    }
};
// Circle should inherit from Shape, make all the changes needed.
class Circle
{
private:
    double radius;
    std::string name;

public:
    // Constructor that takes a string for the name and a double for the radius
    Circle(std::string circleName, double circleRadius)
    {
        this->radius = circleRadius;
        this->name = circleName;
    }

    double area()
    {
        // Implement the area calculation here (π * radius * radius)
        return 1;
    }

    double perimeter()
    {
        // Implement the perimeter calculation here (2 * π * radius)
        return 1;
    }
    void printDetails()
    {
        std::cout << "Name: " << name << std::endl;
    }
    double getRadius()
    {
        return radius;
    }
};
// Rectangle should inherit from Shape, make all the changes needed.
class Rectangle
{
private:
    double width;
    double height;
    std::string name;

public:
    // Constructor that takes a string for the name, a double for the width, and a double for the height
    Rectangle(std::string rectangleName, double rectWidth, double rectHeight)
    {
        this->width = rectWidth;
        this->height = rectHeight;
        this->name = rectangleName;
    }

    double area()
    {
        // Implement the area calculation here (width * height)
        return 1;
    }

    double perimeter()
    {
        // Implement the perimeter calculation here (2 * (width + height))
        return 1;
    }
    void printDetails()
    {
        std::cout << "Name: " << name << std::endl;
    }
    double getWidth() { return width; }
    double getHeight() { return height; }
};

int main()
{
    // Create Circle and Rectangle objects
    Circle circle("Circle", 5.0);
    Rectangle rectangle("Rectangle", 4.0, 6.0);

    // Test the area() function for Circle
    double circleArea = circle.area();
    assert(circleArea == 3.14159265359 * 5.0 * 5.0); // Check if the area is calculated correctly

    // Test the perimeter() function for Circle
    double circlePerimeter = circle.perimeter();
    assert(circlePerimeter == 2.0 * 3.14159265359 * 5.0); // Check if the perimeter is calculated correctly

    // Test the area() function for Rectangle
    double rectangleArea = rectangle.area();
    assert(rectangleArea == 4.0 * 6.0); // Check if the area is calculated correctly

    // Test the perimeter() function for Rectangle
    double rectanglePerimeter = rectangle.perimeter();
    assert(rectanglePerimeter == 2.0 * (4.0 + 6.0)); // Check if the perimeter is calculated correctly

    // Output success message if all tests pass
    std::cout << "All tests passed!" << std::endl;

    return 0;
}
