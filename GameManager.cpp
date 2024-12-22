#include "GameManager.h"
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"
#include <Novice.h>

GameManager::GameManager() {

	// 各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	// 初期シーンの設定
	currentSceneNo_ = TITLE;
	prevSceneNo_ = currentSceneNo_;
}

GameManager::~GameManager(){}

int GameManager::Run() {

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		// 前のシーンに現在のシーンを代入
		prevSceneNo_ = currentSceneNo_;

		// 現在のシーンの番号を受け取る
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		// 前のシーンと現在のシーンが違ったら
		if (prevSceneNo_ != currentSceneNo_) {

			// 現在のシーンの初期化を行う
			sceneArr_[currentSceneNo_]->Initialize();
		}

		///
		/// ↓更新処理ここから
		///

		// 現在のシーンの更新を行う
		sceneArr_[currentSceneNo_]->Update(keys, preKeys);

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		// 現在のシーンの描画を行う
		sceneArr_[currentSceneNo_]->Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	return 0;
}