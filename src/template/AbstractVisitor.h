#pragma once

#include "CmdId.h"

/**
 * 使用の為、
 * 先、名前だけ定義
 */
class MitsubishiProduct;
class HujiProduct;

/**
 * Visitorの基底クラス
 */
class AbstractVisitor
{
protected:
	/**
	 * コンストラクタ
	 */
	AbstractVisitor() { }

public:
	/**
	 * デストラクタ
	 */
	virtual ~AbstractVisitor() { }

public:
	/**
	 * 三菱に訪問する時
	 * @param 対象オブジェクト
	 * @param 実行命令ID
	 */
	virtual void Visit(MitsubishiProduct*, COMMAND_ID) = 0;

	/**
	 * 富士に訪問する時
	 * @param 対象オブジェクト
	 * @param 実行命令ID
	 */
	virtual void Visit(HujiProduct*, COMMAND_ID) = 0;
};
