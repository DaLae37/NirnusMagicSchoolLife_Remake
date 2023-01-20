#include "stdafx.h"
#include "MainScene.h"

MainScene::MainScene() {
	icon = new Sprite(L"Resources/Images/MainScene/mainScene.jpg");
	icon->setPos(0, 0);
	AddObject(icon);

	soundManager->LoadAudioFromFile(L"Resources/Sounds/BackgroundSound.wav");
}

MainScene::~MainScene() {

}

void MainScene::Render() {
	Scene::Render();
}

void MainScene::Update(float dTime) {
	Scene::Update(dTime);
}