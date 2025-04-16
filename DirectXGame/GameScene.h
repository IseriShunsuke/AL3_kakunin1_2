#pragma once
#include "KamataEngine.h"


class GameScene 
{
public:

	KamataEngine::Model* model_ = nullptr;

	KamataEngine::WorldTransform worldTransForm_;

	KamataEngine::Camera camera_;

	void Initialize();

	void Update();

	void Draw();

	~GameScene();


private:
	uint32_t textureHandle_ = 0;
};
