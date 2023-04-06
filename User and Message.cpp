#include <iostream>
#include <fstream>
#include "Header.h"

int main()
{
	fstream user_file = fstream("user.txt", ios::in | ios::out);
	if (!user_file)
		// Для создания файла используем параметр ios::trunc
		user_file = fstream("user.txt", ios::in | ios::out | ios::trunc);

	if (user_file) {
		User obj("Sasha", "Sasha97", "Qwerty");
		// Запишем данные в файл
		user_file << obj << endl;
		// Чтобы считать данные из файла, надо установить позицию для чтения в начало файла
		user_file.seekg(0, ios_base::beg);
		// Считываем данные из файла
		user_file >> obj;
		cout << obj << endl;
		user_file.close();
		system("chmod 600 user.txt");
	}
	else
	{
		cout << "Could not open file user.txt !" << '\n';
		return 1;
	}
	fstream message_file = fstream("message.txt", ios::in | ios::out);
	
	if (!message_file)
		// Для создания файла используем параметр ios::trunc
		message_file = fstream("message.txt", ios::in | ios::out | ios::trunc);
	if (message_file) {
		User obj("Hello", "Sasha97", "User01");
		// Запишем данные в файл
		message_file << obj << endl;
		// Чтобы считать данные из файла, надо установить позицию для чтения в начало файла
		message_file.seekg(0, ios_base::beg);
		// Считываем данные из файла
		message_file >> obj;
		cout << obj << endl;
		message_file.close();
		system("chmod 600 message.txt");
	}
	else
	{
		cout << "Could not open file message.txt !" << '\n';
		return 1;
	}
	return 0;
}