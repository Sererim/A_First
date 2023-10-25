#include "Vector.h"
#include "Polygon.h"
#include "Texture.h"
#include "Color.h"


class PoligonalModel{

private:
    Polygon* Poligons[256];
    Texture* Textures[64];

public:
    PoligonalModel(Polygon* Poligons, Texture* Textures){

        for (int i = 0; i < 256; i++){
            this -> Poligons[i] = &Poligons[i];
        }

        for (int i = 0; i < 64; i++){
            this -> Textures[i] = &Textures[i];
        }
    }
};


class Flash{

private:
    Point3D Location;
    Angle Angle3D;
    Color Colors;
    float Power;

public:
    
    Flash(Point3D Location, Angle Angle3D, Color Colors, float Power){
        this -> Location = Location;
        this -> Angle3D = Angle3D;
        this -> Colors = Colors;
        this -> Power = Power;
    }

    void Rotate(Angle Angle){

    }

    void Move(Point3D Point)
    {

    }
};


class Camera{

private:
    Point3D Location;
    Angle Angle3D;

public:
    void Rotate(Angle Angle3D)
    {

    }

    void Move(Point3D Point)
    {

    }
};


class Scene{
private:
    unsigned int Id;
    PoligonalModel Models;
    Flash Flashes;

public:

    Scene(unsigned int Id, PoligonalModel Models, Flash Flashes)
    {
        this -> Id = Id;
        this -> Models = Models;
        this -> Flashes = Flashes;
    }

    void method1(int something)
    {

    }

    void method2(int something)
    {

    }
};
