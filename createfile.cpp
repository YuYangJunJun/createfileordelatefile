#include <windows.h>
#include <iostream>
void deletefile();
using namespace std;

int main()
{
	string dirName = "D:\\C++代码\\outfile\\code_out\\test";    //设置创建文件夹路径test为需要创建文件夹名称
	/*CreateDirectory是计算机语言，程序含义为第一个参数值为文件夹名称，
	                   第二个参数值为安全属性，一般设置为NULL即可。
					   如果正确创建，返回值为1，如果没有正常创建文件夹，则返回0。
	*/
	
	bool flag = CreateDirectory(dirName.c_str(), NULL);          //使用CreateDirectory创建文件夹
	/*注意：
	CreateDirectory()函数参数如果提示"Error: "const char"类型的实参与"LPCWSTR"类型的形参不兼容"
	解决方法：
	项目菜单——项目属性(最后一个)——配置属性——常规——项目默认值——字符集，将使用Unicode字符集改为未设置即可。
	*/

	//删除文件夹
	deletefile();

	return 0;
}

//创建删除文件夹的方法
void deletefile()
{
	string dirName = "D:\\C++代码\\outfile\\code_out\\test";
	bool flag = RemoveDirectory(dirName.c_str());    //设置创建文件夹路径test为需要创建文件夹名称
}