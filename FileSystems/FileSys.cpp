#include <iostream>
#include <fstream> //Библиотека file stream, осуществляющая работу с файловой системой компьютера посредством использования синтаксиса C++.
#include <string>

bool statistic(std::string str);

//1. Запись собственных данных в файл;
//2. Работа с внешними файлами.

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	std::string path = "file.txt"; //путь к файлу, который необходимо открыть


	// Класс ofstream для записи в файл
	std::ofstream out (path); //объект класса ofstream, позволяющий открывать файлы для доабвления в них текста. Если открываемого файла нет, то он создается.
	out.open(path, std::ios::app); //открытие файла по указанному пути в указанном режиме. Пока он открыт, сторонние приложения и объекты не могут с ним работать.

	/*if (out.is_open()) { //проверка на открытие файла
		std::cout << "Файл открыт для записи.\n";
		std::cout << "Введите строку -> ";
		std::string str;
		std::getline(std::cin, str);
		out << str << '\n'; //добавление текста в файл
		std::cout << "Запись добавлена в файл.\n";
	}
	else
		std::cout << "Ошибка открытия файла.\n";

	out.close();*/ //закрытие файла и очистка объекта out
	//Возможные причины ошибки открытия файла:
	//1. Файл открыт другим предложением/объектом;
	//2. Некорректный синтаксис указания пути к файлу;
	//3. Нет доступа к файлу.

	// Класс ifstream для чтения из файла
	/*std::ifstream in;
	in.open(path);

	if (in.is_open()) { //проверка на открытие файла
		std::cout << "Файл открыт для записи.\n\n";
		std::string file;
		// Посимвольное считывание
		/ *char sym;
		while (in.get(sym)) { 
			std::cout << sym;
		}* /

		// Пословное считывание
		/ *std::string str;
		while (!in.eof()) { // end of file
			in >> str;
			file += str + " \n";
		}
		std::cout << file;* /

		// Построчное считывание
		/ *std::string str;
		while (std::getline(in, str))
			file += str + "\n";
		std::cout << file;* /
	}
	else
		std::cout << "Ошибка открытия файла.\n";


	in.close();*/
	//Возможные причины ошибки открытия файла:
	//1. Файл открыт другим предложением/объектом;
	//2. Некорректный синтаксис указания пути к файлу;
	//3. Нет доступа к файлу.
	//4. Файла не существует.

	//Удаление файла
	/*if (remove(path.c_str()) == 0)
		std::cout << "Файл \"" << path << "\" удален.\n";
	else
		std::cout << "Ошибка удаления файла";*/
	//Возможные причины ошибки удаления файла:
	//1. Файл открыт другим предложением/объектом;
	//2. Некорректный синтаксис указания пути к файлу;
	//3. Нет доступа к файлу.
	//4. Файла не существует.

	//Задача 1.
	std::cout << "Задача 1. \nВведите слово -> ";
	std::string word;
	std::getline(std::cin, word);
	if (statistic(word))
		std::cout << "Слово записано в файл. \n\n";
	else
		std::cout << "Ошибка выполнения функции.\n\n";


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