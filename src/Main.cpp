#include "product/HujiProduct.h"
#include "product/MitsubishiProduct.h"

#include "visitor/FirstVisitor.h"
#include "visitor/SecondVisitor.h"

#include "template/CmdId.h"

#include <iostream>

int main(void)
{
	using namespace std;

	HujiProduct huji;
	MitsubishiProduct mitsubishi;

	FirstVisitor firstVisitor;
	SecondVisitor secondVisitor;

	huji.Accept(&firstVisitor);
	cout << endl << endl;
	huji.Accept(&secondVisitor, COMMAND_ID::CMD_FIRST);
	cout << endl << endl;

	mitsubishi.Accept(&firstVisitor);
	cout << endl << endl;
	mitsubishi.Accept(&secondVisitor, COMMAND_ID::CMD_FIRST);
	cout << endl << endl;

	return 0;
}
