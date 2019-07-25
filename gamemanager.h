#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <list>
#include <map>

namespace SpaceShoot {

class GameObject;

class GameManager
{
public:
    GameManager();
    void Init();

    void Update(double elapsedTime);
    void AddPlayer();

    enum Config
    {
        GC_MAP_WIDTH,
        GC_MAP_HEIGHT,
        GC_PLAYER_SIZE_X,
        GC_PLAYER_SIZE_Y,
    };

private:
    std::list<GameObject*> m_objects;
    std::map<int, double> m_configs;
    void AddObject(GameObject *o);
    void RemoveObject(GameObject *o);
    GameObject *m_player;
};

}
#endif // GAMEMANAGER_H
