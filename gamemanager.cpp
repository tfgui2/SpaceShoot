#include "gamemanager.h"
#include "gameobject.h"
using namespace SpaceShoot;

GameManager::GameManager()
{
    m_player = nullptr;
}

void GameManager::Init()
{
    m_configs[GC_MAP_WIDTH] = 600;
    m_configs[GC_MAP_HEIGHT] = 800;
    m_configs[GC_PLAYER_SIZE_X] = 20;
    m_configs[GC_PLAYER_SIZE_Y] = 20;
}

void GameManager::Update(double elapsedTime)
{
    for (auto it = m_objects.begin(); it != m_objects.end(); it++)
    {
        (*it)->Update(elapsedTime);
    }

}

void GameManager::AddObject(GameObject *o)
{
    m_objects.push_back(o);
}

void GameManager::RemoveObject(GameObject *o)
{
    m_objects.remove(o);
}

void GameManager::AddPlayer()
{
    if (m_player)
    {
        return;
    }

    GameObject *player = new GameObject;
    player->m_x = 0;
    player->m_y = 0;
    player->m_width = m_configs[GC_PLAYER_SIZE_X];
    player->m_height = m_configs[GC_PLAYER_SIZE_Y];

    this->AddObject(player);
    m_player = player;
}
