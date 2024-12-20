#pragma once

#include "InputHandler.h"
#include "Command.h"
#include "Player.h"

/// ===== シーン ===== ///
class Scene {

///-------------------------------------------/// 
/// メンバ関数
///-------------------------------------------///
public:

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

///-------------------------------------------/// 
/// メンバ変数
///-------------------------------------------///
private:

	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
};