#pragma once

#include "CmdId.h"
#include "AbstractVisitor.h"
#include <string>

using namespace std;

class AbstractProduct
{
protected:
	/**
	 * コンストラクタ
	 */
	AbstractProduct();

	/**
	 * コンストラクタ
	 */
	AbstractProduct(string, int);

public:
	/**
	 * デストラクタ
	 */
	virtual ~AbstractProduct();

public:
	/**
	 * 製品の情報取得
	 */
	virtual void GetString() = 0;

	/**
	 * ビジターの実行 <br>
	 * タイプを基盤として、実行内容決定
	 * @param ビジター
	 */
	virtual void Accept(AbstractVisitor*) = 0;

	/**
	 * ビジターの実行 <br>
	 * タイプとIDを基盤として、実行内容決定
	 * @param ビジター
	 * @param 実行ID
	 */
	virtual void Accept(AbstractVisitor*, COMMAND_ID) = 0;

protected:
	/**
	 * 製品の名前
	 */
	string mName;

	/**
	 * 製品の値段
	 */
	int mPrice;
};
