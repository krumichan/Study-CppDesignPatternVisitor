#include "MitsubishiProduct.h"
#include <iostream>

using namespace std;

/**
 * コンストラクタ
 */
MitsubishiProduct::MitsubishiProduct() : AbstractProduct("Mitsubishi Adapter", 1500)
{

}

/**
 * 製品の情報取得
 */
void MitsubishiProduct::GetString()
{
	cout << "-- product information --" << endl;
	cout << "name : " << this->mName << endl;
	cout << "price : " << this->mPrice << endl;
}

/**
 * ビジターの実行 <br>
 * タイプを基盤として、実行内容決定
 * @param ビジター
 */
void MitsubishiProduct::Accept(AbstractVisitor* _visitor)
{
	_visitor->Visit(this, COMMAND_ID::CMD_DEFAULT);
}

/**
 * ビジターの実行 <br>
 * タイプとIDを基盤として、実行内容決定
 * @param ビジター
 * @param 実行ID
 */
void MitsubishiProduct::Accept(AbstractVisitor* _visitor, COMMAND_ID _visitorId)
{
	_visitor->Visit(this, _visitorId);
}
