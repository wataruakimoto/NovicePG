#pragma once

#include "IScene.h"

/// ===== ステージシーン ===== ///
class StageScene : public IScene {

///-------------------------------------------/// 
/// メンバ関数
///-------------------------------------------///
public:

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize() override;

	/// <summary>
	/// 更新
	/// </summary>
	void Update(char* keys, char* preKeys) override;

	/// <summary>
	/// 描画
	/// </summary>
	void Draw() override;
};