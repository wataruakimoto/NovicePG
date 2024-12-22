#pragma once

#include <memory>

class IScene;

/// ===== ゲーム管理クラス ===== ///
class GameManager {

///-------------------------------------------/// 
/// メンバ変数
///-------------------------------------------///
private:

	// シーンの保持
	std::unique_ptr<IScene> sceneArr_[3];

	// 現在のシーン
	int currentSceneNo_;

	// 前のシーン
	int prevSceneNo_;

///-------------------------------------------/// 
/// メンバ関数
///-------------------------------------------///
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	GameManager();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameManager();

	/// <summary>
	/// ゲーム実行
	/// </summary>
	/// <returns></returns>
	int Run();
};