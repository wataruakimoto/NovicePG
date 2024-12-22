#pragma once

// シーン名
enum SCENE { TITLE, STAGE, CLEAR };

/// ===== シーン基底クラス ===== ///
class IScene {

///-------------------------------------------/// 
/// メンバ変数
///-------------------------------------------///
protected:

	// シーン番号
	static int sceneNo;

///-------------------------------------------///
/// メンバ関数
///-------------------------------------------///
public:

	/// <summary>
	/// 仮想デストラクタ
	/// </summary>
	virtual ~IScene();

	/// ===== 抽象クラスのため純粋仮想関数 ===== ///

	/// <summary>
	/// 初期化
	/// </summary>
	virtual void Initialize() = 0;

	/// <summary>
	/// 更新
	/// </summary>
	virtual void Update(char* keys, char* preKeys) = 0;

	/// <summary>
	/// 描画
	/// </summary>
	virtual void Draw() = 0;

	/// ===== ゲッター ===== ///

	/// <summary>
	/// シーン番号のゲッター
	/// </summary>
	/// <returns>int</returns>
	int GetSceneNo() { return sceneNo; }
};