#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

namespace SpaceShoot {

class GameObject
{
public:
    GameObject();

    void Update(double elapsedTime);

    void MoveLeft();
    void MoveRight();
    void MoveTop();
    void MoveDown();

public:
    double m_x;
    double m_y;
    double m_width;
    double m_height;
    double m_speed;
    double m_velocity_x;
    double m_velocity_y;
};

}
#endif // GAMEOBJECT_H
