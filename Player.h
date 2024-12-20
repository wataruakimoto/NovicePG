#pragma once

#include "math/Vector2.h"

using namespace KamataEngine;

/// ===== プレイヤー ===== ///
class Player {

///-------------------------------------------/// 
/// メンバ変数
///-------------------------------------------///
private:

	// 位置
	Vector2 position_;

	// 速さ
	float speed_ = 2.0f;

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

	/// <summary>
	/// 右移動
	/// </summary>
	void MoveRight();

	/// <summary>
	/// 左移動
	/// </summary>
	void MoveLeft();
};