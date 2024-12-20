#pragma once

#include "Command.h"

/// ===== 入力管理クラス ===== ///
class InputHandler {

///-------------------------------------------/// 
/// メンバ関数
///-------------------------------------------///
private:

	// 入力A
	ICommand* pressKeyA_;

	// 入力D
	ICommand* pressKeyD_;

///-------------------------------------------/// 
/// メンバ関数
///-------------------------------------------///
public:

	ICommand* HandleInput();

	/// <summary>
	/// キー割り当てA
	/// </summary>
	void AssignMoveLeftCommand2PressKeyA();

	/// <summary>
	/// キー割り当てD
	/// </summary>
	void AssignMoveLeftCommand2PressKeyD();
};