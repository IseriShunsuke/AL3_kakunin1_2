#include "GameScene.h"
#include "KamataEngine.h"

using namespace KamataEngine;
// 初期化
void GameScene::Initialize() 
{
	textureHandle_ = TextureManager::Load("player1.png"); 
	sprite_ = Sprite::Create(textureHandle_, {100, 50});
}
// 更新
void GameScene::Update() {}
// 描画
void GameScene::Draw() 
{ 
	DirectXCommon* dXCommon = DirectXCommon::GetInstance();
	Sprite::PreDraw(dXCommon->GetCommandList());
	sprite_->Draw();
	Sprite::PostDraw();
	delete sprite_;
}
