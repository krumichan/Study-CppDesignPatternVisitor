#include "FirstVisitor.h"
#include <iostream>

using namespace std;

/**
 * 富士に訪問する時
 * @param _product 対象オブジェクト
 * @param _cmd 実行命令ID
 */
void FirstVisitor::Visit(HujiProduct* _product, COMMAND_ID _cmd)
{
	cout << "HujiSoft -- first visitor..." << endl;
	cout << "visitor id..." << _cmd << endl;
	_product->GetString();

	switch(_cmd)
	{
	case COMMAND_ID::CMD_FIRST:
		this->HujiCommand1();
		break;

	default:
		break;
	}
}

/**
 * 三菱に訪問する時
 * @param _product 対象オブジェクト
 * @param _cmd 実行命令ID
 */
void FirstVisitor::Visit(MitsubishiProduct* _product, COMMAND_ID _cmd)
{
	cout << "Mitsubishi -- first visitor..." << endl;
	cout << "visitor id..." << _cmd << endl;
	_product->GetString();

	switch(_cmd)
	{
	case COMMAND_ID::CMD_FIRST:
		this->MitsubishiCommand1();
		break;

	default:
		break;
	}
}

/**
 * 富士用の1番命令実行
 */
void FirstVisitor::HujiCommand1()
{
	cout << "first visitor hujisoft command 1..." << endl;
}

/**
 * 三菱用の1番命令実行
 */
void FirstVisitor::MitsubishiCommand1()
{
	cout << "first visitor mitsubishi coomand 1..." << endl;
}
