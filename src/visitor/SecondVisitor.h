#pragma once

#include "../product/HujiProduct.h"
#include "../product/MitsubishiProduct.h"
#include "../template/AbstractVisitor.h"

/**
 * Second Visitor
 */
class SecondVisitor : public AbstractVisitor
{
public:
	/**
	 * 富士に訪問する時
	 * @param 対象オブジェクト
	 * @param 実行命令ID
	 */
	void Visit(HujiProduct*, COMMAND_ID) override;

	/**
	 * 三菱に訪問する時
	 * @param 対象オブジェクト
	 * @param 実行命令ID
	 */
	void Visit(MitsubishiProduct*, COMMAND_ID) override;

private:
	/**
	 * 富士用の1番命令実行
	 */
	void HujiCommand1();

private:
	/**
	 * 三菱用の1番命令実行
	 */
	void MitsubishiCommand1();
};
