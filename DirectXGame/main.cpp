#include <Windows.h>
#include "KamataEngine.h"
#include "GameScene.h"
using namespace KamataEngine;


// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int) {
	KamataEngine::Initialize(L"LE2D_04_イセリ_シュンスケ");
	
	DirectXCommon* dxcommon = DirectXCommon::GetInstance();
	//ゲームシーンのインスタンス生成
	GameScene* gameScene = new GameScene();
	//ゲームシーン初期化
	gameScene->Initialize();
	//メインループ
	while (true)
	{
		if (KamataEngine::Update())
		{
			break;
		}

		//ゲームシーンの更新
		gameScene->Update();
		
		//描画開始
		dxcommon->PreDraw();
		
		//ゲームシーンの描画
		gameScene->Draw();
		
		//描画終了
		dxcommon->PostDraw();
	}
	//ゲームシーンの解散
	delete gameScene;
	//nullptrの代入
	gameScene = nullptr;
	//エンジン終了
	KamataEngine::Finalize();
	return 0;
}
