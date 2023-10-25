#include <iostream>

class Vector3D
{
private:
    double x;
    double y;
    double z;

public:

    // Constructor
    Vector3D(double x, double y, double z)
    {
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }

    void show() {
        std::cout << "X: " << x << std::endl;
        std::cout << "Y: " << y << std::endl;
        std::cout << "Z: " << z << std::endl;  
    }

    // Getters
    double getX() const {return x;}
    double getY() const {return y;}
    double getZ() const {return z;}

    // Setters
    void setX(double x) { this -> x = x; }
    void setY(double y) { this -> y = y; }
    void setZ(double z) { this -> z = z; }

    // Basic 3D vector math.

    Vector3D operator+(const Vector3D& other){

    }

    Vector3D operator-(const Vector3D& other){

    }

    Vector3D operator*(const Vector3D& other){

    }

    Vector3D operator/(const Vector3D& other){

    }

};


class Point3D
{
private:
    double x;
    double y;
    double z;

public:
    
    // Constructor
    Point3D(double x, double y, double z){
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }

    // Getters
    double getX() const {return x;}
    double getY() const {return y;}
    double getZ() const {return z;}

    // Setters

    void setX(double x) { this -> x = x; }
    void setY(double y) { this -> y = y; }
    void setZ(double z) { this -> z = z; }

    
    // Basic 3D point math.

    Point3D operator+(const Point3D& other){

    }

    Point3D operator-(const Point3D& other){

    }

    Point3D operator*(const Point3D& other){

    }

    Point3D operator/(const Point3D& other){

    }
};


class Angle{

private:
    double alpha;
    double beta;
    double gamma;

public:
    Angle(double alpha, double beta, double gamma){
        this -> alpha = alpha;
        this -> beta = beta;
        this -> gamma = gamma;
    }
};
