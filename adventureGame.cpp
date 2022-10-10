//アドベンチャーゲーム
#include <cstdalign>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  /*cout << "難易度を選んでください\n\n";
  cout << "1 - 初級\n";
  cout << "2 - 中級\n";
  cout << "3 - 上級\n";

  int choice;
  cout << "Choice;: ";
  cin >> choice;

  switch (choice) {
  case 1:
    cout << "あなたは初級を選択しました。\n";
    break;

  case 2:
    cout << "あなたは中級を選択しました。 \n";
    break;

  case 3:
    cout << "あなたは上級を選択しました。 \n";
    break;

  default:
    cout << "あなたは難易度を選択していません。 \n";
  }
*/
  srand(static_cast<unsigned int>(time(0)));
  // seed random number generator

  int randomNumber = rand();
  // 乱数設定

  int choice;
  // playerの選択

  // int enemy = (randomNumber % 2) + 1;
  // 1~5の間の数字を取得

  int level = 1;
  // 敵のレベル

  int enemyLevel = 2;
  // 敵のレベル(数字の範囲)

  int count = 0;
  // 敵に勝った回数

  cout << "\t5体の敵を倒そう！\n\n";
  cout << "敵の数字を当てれれば倒せるよ！\n\n";

  int a;
  // for文の値

  for (a = 0; enemyLevel < 7; ++enemyLevel) {
    cout << "敵レベル" << level << ": "
         << "1 ~ " << enemyLevel << "！\n\n";
    cin >> choice;

    ++level;
    int enemyRange = 2;
    // 敵の攻撃範囲

    int enemy = (randomNumber % enemyRange) + 1;
    //敵の攻撃範囲を決める

    ++enemyRange;

    if (choice < enemy) {
      cout << "敵に負けてしまった...\n\n";

    } else if (choice > enemy) {
      cout << "敵に負けてしまった...\n\n";

    } else {
      cout << "敵を倒した！\n\n";
      ++count;
    }
  }
  cout << "合計で敵を " << count << "体 倒した！" << endl;

  return 0;
}