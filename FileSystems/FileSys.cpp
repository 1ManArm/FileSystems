#include <iostream>
#include <fstream> //���������� file stream, �������������� ������ � �������� �������� ���������� ����������� ������������� ���������� C++.
#include <string>

bool statistic(std::string str);

//1. ������ ����������� ������ � ����;
//2. ������ � �������� �������.

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	std::string path = "file.txt"; //���� � �����, ������� ���������� �������


	// ����� ofstream ��� ������ � ����
	std::ofstream out (path); //������ ������ ofstream, ����������� ��������� ����� ��� ���������� � ��� ������. ���� ������������ ����� ���, �� �� ���������.
	out.open(path, std::ios::app); //�������� ����� �� ���������� ���� � ��������� ������. ���� �� ������, ��������� ���������� � ������� �� ����� � ��� ��������.

	/*if (out.is_open()) { //�������� �� �������� �����
		std::cout << "���� ������ ��� ������.\n";
		std::cout << "������� ������ -> ";
		std::string str;
		std::getline(std::cin, str);
		out << str << '\n'; //���������� ������ � ����
		std::cout << "������ ��������� � ����.\n";
	}
	else
		std::cout << "������ �������� �����.\n";

	out.close();*/ //�������� ����� � ������� ������� out
	//��������� ������� ������ �������� �����:
	//1. ���� ������ ������ ������������/��������;
	//2. ������������ ��������� �������� ���� � �����;
	//3. ��� ������� � �����.

	// ����� ifstream ��� ������ �� �����
	/*std::ifstream in;
	in.open(path);

	if (in.is_open()) { //�������� �� �������� �����
		std::cout << "���� ������ ��� ������.\n\n";
		std::string file;
		// ������������ ����������
		/ *char sym;
		while (in.get(sym)) { 
			std::cout << sym;
		}* /

		// ��������� ����������
		/ *std::string str;
		while (!in.eof()) { // end of file
			in >> str;
			file += str + " \n";
		}
		std::cout << file;* /

		// ���������� ����������
		/ *std::string str;
		while (std::getline(in, str))
			file += str + "\n";
		std::cout << file;* /
	}
	else
		std::cout << "������ �������� �����.\n";


	in.close();*/
	//��������� ������� ������ �������� �����:
	//1. ���� ������ ������ ������������/��������;
	//2. ������������ ��������� �������� ���� � �����;
	//3. ��� ������� � �����.
	//4. ����� �� ����������.

	//�������� �����
	/*if (remove(path.c_str()) == 0)
		std::cout << "���� \"" << path << "\" ������.\n";
	else
		std::cout << "������ �������� �����";*/
	//��������� ������� ������ �������� �����:
	//1. ���� ������ ������ ������������/��������;
	//2. ������������ ��������� �������� ���� � �����;
	//3. ��� ������� � �����.
	//4. ����� �� ����������.

	//������ 1.
	std::cout << "������ 1. \n������� ����� -> ";
	std::string word;
	std::getline(std::cin, word);
	if (statistic(word))
		std::cout << "����� �������� � ����. \n\n";
	else
		std::cout << "������ ���������� �������.\n\n";


	return 0;
}

bool statistic(std::string str) {
	std::ofstream out;
	const std::string path = "words.txt";
	out.open(path, std::ios::app);
	if (out.is_open()) {
		out << str << ' ' << str.length() << '\n';
		out.close();
		return true;
	}
	out.close();
	return false;
}