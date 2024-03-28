/* Maahum Khan
    20232476
    Assignment 4
    ShapesGood.cpp implementation file */

#include <iostream>
#include <string>

#include "ShapesGood.h"

using namespace std;

// Definition of Shape class, essentially same definition as in ShapesBad.cpp but with color included
// Default class constructor sets length and width to 0, color to black
Shape::Shape() : length(0), width(0), color("black") { }

Shape::Shape(int len, int wid, const string& col) : length(len), width(wid), color(col) { }

Shape::~Shape() { }

// Accessor methods for Shape parameters
int Shape::getLength() const { return length; }

int Shape::getWidth() const { return width; }

string Shape::getColor() const { return color; }


// Definition of Fillable class
Fillable::Fillable(const string& fillCol) : filledColor(fillCol) { }

Fillable::~Fillable() { }

string Fillable::getFilledColor() const { return filledColor; }


// Definition of Text Label class
TextLabel::TextLabel(const string& phrase) : label(phrase) { }

TextLabel::~TextLabel() { }

string TextLabel::getLabel() const { return label; }


// Definition of Square class, also similar definition to that in ShapesBad.cpp but with color specified
Square::Square(int len, int wid, const string& col) : Shape(len, wid, col) { }

Square::~Square() { }

void Square::draw() {
	cout << "\nDrawing a " + getColor() + " square!";
}


// Definition of Filled Square class, also similar to that in ShapesBad.cpp
FilledSquare::FilledSquare(int len, int wid, const string& col, const string& fillCol) : Square(len, wid, col), Fillable(fillCol) { }

FilledSquare::~FilledSquare() { }

void FilledSquare::fill() {
    cout << "\nFilled with " + getFilledColor() + " coloring!";
}

void FilledSquare::draw() {
    Square::draw(); // Print drawing outline line
    fill();         // Print filling line
}


// Definition of Filled Text Square class
FilledTextSquare::FilledTextSquare(int len, int wid, const string& col, const string& fillCol, const string& phrase) :
    Square(len, wid, col),
    Fillable(fillCol),
    TextLabel(phrase)
{ }

FilledTextSquare::~FilledTextSquare() { }

void FilledTextSquare::fill() {
    cout << "\nFilled with " + getFilledColor() + " coloring!";
}

void FilledTextSquare::addText() {
    cout << "\nWith label " + getLabel() + "!";
}

void FilledTextSquare::draw() {
    Square::draw();     // Prints outline line using draw() function from Square class
    fill();             // Prints filling line
    addText();          // Prints text label line
}


// Definition of Circle class, similar to Square class definition
Circle::Circle(int len, int wid, const string& col) : Shape(len, wid, col) { }

Circle::~Circle() { }

void Circle::draw() {
    cout << "\nDrawing a " + getColor() + " circle!";
}


// Definition of Filled Circle class
FilledCircle::FilledCircle(int len, int wid, const string& col, const string& fillCol) : Circle(len, wid, col), Fillable(fillCol) { }

FilledCircle::~FilledCircle() { }

void FilledCircle::fill() {
    cout << "\nFilled with " + getFilledColor() + " coloring!";
}

void FilledCircle::draw() {
    Circle::draw();     // Prints drawing outline line using draw() function from Circle class
    fill();             // Prints fill line
}


//Definition of Arc class
Arc::Arc(int len, int wid, const string& col) : Shape(len, wid, col) { }

Arc::~Arc() { }

void Arc::draw() {
    cout << "\nDrawing a " + getColor() + " arc!";
}

