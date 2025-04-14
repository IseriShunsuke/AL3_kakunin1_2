#pragma once
#include "KamataEngine.h"


class GameScene 
{
public:

	KamataEngine::Sprite* sprite_ = nullptr;

	void Initialize();

	void Update();

	void Draw();

	uint32_t textureHandle_ = 0;
};
