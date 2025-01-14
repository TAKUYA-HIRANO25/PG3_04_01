#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "LE2C_19_ヒラノ_タクヤ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// ゲームマネージャーを生成
	GameManager gameManager;

	gameManager.Run();

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
