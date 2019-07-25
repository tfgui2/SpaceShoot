#include "gameobject.h"
using namespace SpaceShoot;

GameObject::GameObject()
{
    m_x = m_y = m_width = m_height = m_velocity_x = m_velocity_y = 0;
    m_speed = 1;
}

void GameObject::Update(double elapsedTime)
{
    m_x = m_x + (m_velocity_x * m_speed * elapsedTime);
    m_y = m_y + (m_velocity_y * m_speed * elapsedTime);
}

void GameObject::MoveLeft()
{
    m_velocity_x = -1;
}
void GameObject::MoveRight()
{
    m_velocity_x = 1;
}
void GameObject::MoveTop()
{
    m_velocity_y = -1;
}
void GameObject::MoveDown()
{
    m_velocity_y = 1;
}
