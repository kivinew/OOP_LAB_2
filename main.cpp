#include "time.h"

void main()
{
	setlocale(LC_ALL, "Russian");
		
	int size = -1, count_obj = -1, nomer1 = -1, nomer2 = -1, nomer3 = -1;
	
	while (size < 0)
	{
		cout << "Укажите размер массива для объектов Время: ";
		cin >> size;
		if (size < 0) cout << "Размер массива не должен быть отрицательным!" << endl;
	}	
	Time *time_array = new Time[size];
	cout << "Массив из " << size << " объектов Time создан." << endl;
	
	cout << endl << "Введите константный эталонный объект Time" << endl;
	cin >> time_array[0];
	cout << "Значение константного эталонного объекта Time равно " << time_array[0] << endl;		
		
	cout << endl << "Введите сравниваемый объект Time" << endl;
	cin >> time_array[1];
	cout << "Значение сравниваемого объекта Time равно " << time_array[1] << endl;
	
	char c = 0, c1 = 0;
	while (c != '0')
	{
		cout << endl << "-------------------------ГЛАВНОЕ МЕНЮ-------------------------" << endl;
		cout << "1. Выполнить инкремент или декремент" << endl;
		cout << "2. Выполнить сложение объектов Time" << endl;
		cout << "3. Выполнить операции сравнения для объектов Time" << endl;
		cout << "4. Выполнить присваивание для объекта Time" << endl;
		cout << "5. Выполнить приведения объекта Time к типу int" << endl;
		cout << "6. Выполнить операторы ввода/вывода для объектов Time" << endl;
		cout << "7. Вывести значения всех объектов Время из массива" << endl;
		cout << "0. Выход" << endl;
		cout << "Введите номер команды: ";
		
		cin >> c;
		switch (c)
		{
		case '1': {
			cout << endl << "---------------Выполнение инкремента или декремента---------------" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "Введите номер первого операнда из массива объектов Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "Номер объекта введен некорректно!" << endl;
				}					
			}
			nomer2 = -1;
			while ((nomer2 < 0) || (nomer2 >= size))
			{
				cout << "Введите номер второго операнда из массива объектов Time: ";
				cin >> nomer2;
				if ((nomer2 < 0) || (nomer2 >= size))
				{
					cout << "Номер объекта введен некорректно!" << endl;
				}					
			}
			cout << "1. Префиксный инкремент: Операнд_1 = ++ Операнд_2" << endl;
			cout << "2. Префиксный декремент: Операнд_1 = -- Операнд_2" << endl;
			cout << "3. Постфиксный инкремент: Операнд_1 = Операнд_2 ++" << endl;
			cout << "4. Постфиксный декремент: Операнд_1 = Операнд_2 --" << endl;
			cout << "Введите номер команды: ";
			cin >> c1;
			switch (c1) 
			{
			case '1': 
				time_array[nomer1] = ++ time_array[nomer2];
				cout << "Первый операнд равен: " << time_array[nomer1] << endl;
				cout << "Второй операнд равен: " << time_array[nomer2] << endl;
				break;

			case '2':
				time_array[nomer1] = -- time_array[nomer2];
				cout << "Первый операнд равен: " << time_array[nomer1] << endl;
				cout << "Второй операнд равен: " << time_array[nomer2] << endl;
				break;

			case '3':
				time_array[nomer1] = time_array[nomer2] ++;
				cout << "Первый операнд равен: " << time_array[nomer1] << endl;
				cout << "Второй операнд равен: " << time_array[nomer2] << endl;
				break;

			case '4':
				time_array[nomer1] = time_array[nomer2] --;
				cout << "Первый операнд равен: " << time_array[nomer1] << endl;
				cout << "Второй операнд равен: " << time_array[nomer2] << endl;
				break;
			default:
				cout << "Нет такой команды!" <<endl;
				break;
			}
			break;
		}
		case '2': {
			cout << endl << "----------------------Сложение объектов Time----------------------" << endl;
			cout << "Операнд_1 = Операнд_2 + Операнд_3" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "Введите номер первого операнда из массива объектов Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "Номер объекта введен некорректно!" << endl;
				}					
			}
			nomer2 = -1;
			while ((nomer2 < 0) || (nomer2 >= size))
			{
				cout << "Введите номер второго операнда из массива объектов Time: ";
				cin >> nomer2;
				if ((nomer2 < 0) || (nomer2 >= size))
				{
					cout << "Номер объекта введен некорректно!" << endl;
				}					
			}
			nomer3 = -1;
			while ((nomer3 < 0) || (nomer3 >= size))
			{
				cout << "Введите номер третьего операнда из массива объектов Time: ";
				cin >> nomer3;
				if ((nomer3 < 0) || (nomer3 >= size))
				{
					cout << "Номер объекта введен некорректно!" << endl;
				}					
			}
			time_array[nomer1] = time_array[nomer2] + time_array[nomer3];
			cout << "Первый операнд равен: " << time_array[nomer1] << endl;
			cout << "Второй операнд равен: " << time_array[nomer2] << endl;
			cout << "Третий операнд равен: " << time_array[nomer3] << endl;
			break;
		}
		case '3': {
			cout << endl << "----------Выполнение операций сравнения для объекта Time----------" << endl;
			for (int i = 1; i < size; i++)
			{
				if (time_array[i] > time_array[0])
				{
					cout << "[" << i << "]" << time_array[i] << " > " << time_array[0] << endl;
				}
				else
				{
					if (time_array[i] < time_array[0])
					{
						cout << "[" << i << "] " << time_array[i] << " < " << time_array[0] << endl;
					}
					else
					{
						cout << "[" << i << "]" << time_array[i] << " = " << time_array[0] << endl;
					}
				}
			}			
			break;
		}
		case '4': {
			cout << endl << "-------------Выполнение присваивания для объекта Time-------------" << endl;
			cout << "Операнд_1 = Операнд_2" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "Введите номер первого операнда из массива объектов Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "Номер объекта введен некорректно!" << endl;
				}					
			}
			nomer2 = -1;
			while ((nomer2 < 0) || (nomer2 >= size))
			{
				cout << "Введите номер второго операнда из массива объектов Time: ";
				cin >> nomer2;
				if ((nomer2 < 0) || (nomer2 >= size))
				{
					cout << "Номер объекта введен некорректно!" << endl;
				}					
			}
			time_array[nomer1] = time_array[nomer2];
			cout << "Первый операнд равен: " << time_array[nomer1] << endl;
			cout << "Второй операнд равен: " << time_array[nomer2] << endl;
			break;
		}
		case '5': {
			cout << endl << "----------------Приведение объекта Time к типу int----------------" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "Введите номер объекта из массива объектов Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "Номер объекта введен некорректно!" << endl;
				}					
			}
			cout << "Объект Time равен: " << time_array[nomer1] << endl;
			cout << "Приведенное значение объекта равно " << (int)time_array[nomer1] << endl;
			break;
		}
		case '6': {
			cout << endl << "--------Выполнение операторов ввода/вывода для объектов Time--------" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "Введите номер изменяемого объекта из массива объектов Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "Номер объекта введен некорректно!" << endl;
				}					
			}
			cin >> time_array[nomer1];
			cout << "Значение для " << nomer1 << "-ого элемента массива изменено на " << time_array[nomer1] << endl;
			break;
		}			
		case '7': {
			cout << endl << "------------Вывод всех объектов Время из массива------------" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << "Время для " << i << "-ого элемента массива равно " << time_array[i] << endl;
			}
			break;
		}		
		default:
			cout << "Нет такой команды!" <<endl;
			break;			
		}		
	}
}
