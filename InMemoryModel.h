#include "ModelElements.h"
#include <vector>


class ModelChangeObserver{
public:
    virtual void ApplyUpdateModel();
};


class ModelChanger{
public:
    virtual void NotifyChange(ModelChanger sender);
};


class ModelStore : public ModelChangeObserver
{
private:
    void ApplyUpdateModel();

public:
    std::vector<PoligonalModel> Models;
    std::vector<Scene> Scenes;
    std::vector<Flash> Flashes;
    std::vector<Camera> Cameras;

    ModelStore(std::vector<PoligonalModel> Models, std::vector<Scene> Scenes,
    std::vector<Flash> Flashes, std::vector<Camera> Cameras)
    {
        this -> Models = Models;
        this -> Scenes = Scenes;
        this -> Flashes = Flashes;
        this -> Cameras = Cameras;
    }
};

