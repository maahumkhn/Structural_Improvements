/* Maahum Khan 
    20232476
    Assignment 4 
    ShapesGood.h Header File */

#pragma once

#include <string>

using namespace std;

// Shape class -- general base class for all shapes
class Shape {
public:
    Shape();                        // No argument class constructor
    Shape(int, int, const string&); // Class constructor with length, width, and color specified
    virtual ~Shape();
    virtual void draw() = 0;        // Needed since all child classes have draw() and Shape's draw() is called in main
    int getLength() const;          // Accessor method for length
    int getWidth() const;           // Accessor method for width
    string getColor() const;        // Accessor method for color
private:
    int length;
    int width;
    string color;
};

// Fillable class -- class for shapes that can be filled
class Fillable {
public:
    Fillable(const string&);        // Class constructor with color to be filled specified
    virtual ~Fillable();
    string getFilledColor() const;  // Accessor method for color of filling
private:
    string filledColor;
};

// TextLabel class -- class for shapes that can hold text labels
class TextLabel {
public:
    TextLabel(const string&);       // Class constructor with label specified
    virtual ~TextLabel();
    string getLabel() const;        // Accessor method for text label
private:
    string label;
};

// Square class, extends Shape class
class Square : public Shape {
public:
	Square(int, int, const string&); // Class constructor with specified length, width, and color
    virtual ~Square();
	void draw();  // Drawing outline
};

// Filled in square's class, extends Shape and Fillable classes
class FilledSquare : public Square, public Fillable {
public:
	FilledSquare(int, int, const string&, const string&);  // Class constructor with specified length, width, outline color, fill color
    virtual ~FilledSquare();      
	void fill();               // Fill in square
    void draw();               // Draw filled in square with outline
};

// Filled in square with text class, extends Shape, Fillable, and TextLabel classes
class FilledTextSquare : public Square, public Fillable, public TextLabel {
public:
	FilledTextSquare(int, int, const string&, const string&, const string&); // Class constructor with specified length, width, outline color, fill color, and text
    virtual ~FilledTextSquare();
	void fill();                // Fill in square
	void addText();            // Draw with specified text label inside of square
    void draw();                // Draw with filling, text, and outline
};

// Circle class, extends Shape class
class Circle : public Shape {
public:
	Circle(int, int, const string&);    // Class constructor with specified length, width, color
    virtual ~Circle();
	void draw();                        // Draw outline of circle
};

// Filled circle class, extends Shape and Fillable class
class FilledCircle : public Circle, public Fillable {
public:
	FilledCircle(int, int, const string&, const string&); // Class constructor with specified length, width, outline color, fill color
    virtual ~FilledCircle();
	void fill();                // Fill in circle
    void draw();                // Draw circle filled in with outline
};

// Arc class, extends shape
class Arc : public Shape {
public:
	Arc(int, int, const string&);       // Class constructor with specified length, width, and outline color
    virtual ~Arc();
	void draw();                        // Draw outline of arc
};
