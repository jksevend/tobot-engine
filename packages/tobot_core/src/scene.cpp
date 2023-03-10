#include "scene.h"

using namespace Tobot::Core;

Scene::Scene(const char * id) : m_Id(id) {
}

void Scene::add(GameEntity * gameEntity) {
    this->m_GameEntities[gameEntity->getId()] = gameEntity;
}

void Scene::prepareTextures(SDL_Renderer * renderer) {
    for (auto object : this->m_GameEntities) {
        object.second->initializeTexture(renderer);
    }
}

void Scene::update() {
    for (auto object : this->m_GameEntities) {
        object.second->update();
    }
}

void Scene::render(SDL_Renderer * renderer) {
    for (auto object : this->m_GameEntities) {
        if (object.second->isVisible()) {
            object.second->render(renderer);
        }
    }
}

void Scene::destroy(const char * id) {
    Tobot::Core::GameEntity * gameEntity = this->m_GameEntities[id];
    gameEntity->dispose();
}

void Scene::destroyAll() {
    for (auto entity : this->m_GameEntities) {
        entity.second->dispose();
    }
}

Scene::~Scene() {
}