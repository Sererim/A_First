#include "Vector.h"

class Polygon{

private:
    Point3D points[3];

public:
    // Constructor
    Polygon(Point3D p1, Point3D p2, Point3D p3)
    {
        points[0] = p1;
        points[1] = p2;
        points[2] = p3;
    }

    // Accessors
    Point3D getPoint1() const {return points[0];}
    Point3D getPoint2() const {return points[1];}
    Point3D getPoint3() const {return points[2];}

};
