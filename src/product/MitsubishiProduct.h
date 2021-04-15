#pragma once

#include "../template/AbstractProduct.h"

class MitsubishiProduct : public AbstractProduct
{
public:
	/**
	 * コンストラクタ
	 */
	MitsubishiProduct();

public:
	/**
	 * 製品の情報取得
	 */
	void GetString() override;

	/**
	 * ビジターの実行 <br>
	 * タイプを基盤として、実行内容決定
	 * @param ビジター
	 */
	void Accept(AbstractVisitor*) override;

	/**
	 * ビジターの実行 <br>
	 * タイプとIDを基盤として、実行内容決定
	 * @param ビジター
	 * @param 実行ID
	 */
	void Accept(AbstractVisitor*, COMMAND_ID) override;
};
