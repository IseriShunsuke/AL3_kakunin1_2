#include "GameScene.h"
#include "KamataEngine.h"

using namespace KamataEngine;
// 初期化
void GameScene::Initialize() 
{
	textureHandle_ = TextureManager::Load("uvChecker.png"); 
	worldTransForm_.Initialize();
	camera_.Initialize();
	model_ = Model::Create();
}
// 更新
void GameScene::Update() {}
// 描画
void GameScene::Draw() 
{ 
	DirectXCommon* dXCommon = DirectXCommon::GetInstance();

	Model::PreDraw(dXCommon->GetCommandList());
	
	model_->Draw(worldTransForm_,camera_,textureHandle_);
	
	Model::PostDraw();
}

GameScene::~GameScene()
{ 
	delete model_;
}
