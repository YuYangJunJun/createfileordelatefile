#include <windows.h>
#include <iostream>
void deletefile();
using namespace std;

int main()
{
	string dirName = "D:\\C++����\\outfile\\code_out\\test";    //���ô����ļ���·��testΪ��Ҫ�����ļ�������
	/*CreateDirectory�Ǽ�������ԣ�������Ϊ��һ������ֵΪ�ļ������ƣ�
	                   �ڶ�������ֵΪ��ȫ���ԣ�һ������ΪNULL���ɡ�
					   �����ȷ����������ֵΪ1�����û�����������ļ��У��򷵻�0��
	*/
	
	bool flag = CreateDirectory(dirName.c_str(), NULL);          //ʹ��CreateDirectory�����ļ���
	/*ע�⣺
	CreateDirectory()�������������ʾ"Error: "const char"���͵�ʵ����"LPCWSTR"���͵��ββ�����"
	���������
	��Ŀ�˵�������Ŀ����(���һ��)�����������ԡ������桪����ĿĬ��ֵ�����ַ�������ʹ��Unicode�ַ�����Ϊδ���ü��ɡ�
	*/

	//ɾ���ļ���
	deletefile();

	return 0;
}

//����ɾ���ļ��еķ���
void deletefile()
{
	string dirName = "D:\\C++����\\outfile\\code_out\\test";
	bool flag = RemoveDirectory(dirName.c_str());    //���ô����ļ���·��testΪ��Ҫ�����ļ�������
}