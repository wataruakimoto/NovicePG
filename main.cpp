#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "LE2C_01_アキモト_ワタル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// 生成
	GameManager* gameManager = new GameManager();

	// ゲーム実行
	gameManager->Run();

	// 解放
	delete gameManager;

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}