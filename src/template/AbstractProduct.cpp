#include "AbstractProduct.h"

/**
 * コンストラクタ
 */
AbstractProduct::AbstractProduct()
{
	mName = nullptr;
	mPrice = 0;
}

/**
 * コンストラクタ
 * @param _name 製品名
 * @param _price 製品の値段
 */
AbstractProduct::AbstractProduct(string _name, int _price)
{
	mName = _name;
	mPrice = _price;
}

/**
 * デストラクタ
 */
AbstractProduct::~AbstractProduct()
{

}
