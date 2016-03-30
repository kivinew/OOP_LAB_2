#include "time.h"

void main()
{
	setlocale(LC_ALL, "Russian");
		
	int size = -1, count_obj = -1, nomer1 = -1, nomer2 = -1, nomer3 = -1;
	
	while (size < 0)
	{
		cout << "������� ������ ������� ��� �������� �����: ";
		cin >> size;
		if (size < 0) cout << "������ ������� �� ������ ���� �������������!" << endl;
	}	
	Time *time_array = new Time[size];
	cout << "������ �� " << size << " �������� Time ������." << endl;
	
	cout << endl << "������� ����������� ��������� ������ Time" << endl;
	cin >> time_array[0];
	cout << "�������� ������������ ���������� ������� Time ����� " << time_array[0] << endl;		
		
	cout << endl << "������� ������������ ������ Time" << endl;
	cin >> time_array[1];
	cout << "�������� ������������� ������� Time ����� " << time_array[1] << endl;
	
	char c = 0, c1 = 0;
	while (c != '0')
	{
		cout << endl << "-------------------------������� ����-------------------------" << endl;
		cout << "1. ��������� ��������� ��� ���������" << endl;
		cout << "2. ��������� �������� �������� Time" << endl;
		cout << "3. ��������� �������� ��������� ��� �������� Time" << endl;
		cout << "4. ��������� ������������ ��� ������� Time" << endl;
		cout << "5. ��������� ���������� ������� Time � ���� int" << endl;
		cout << "6. ��������� ��������� �����/������ ��� �������� Time" << endl;
		cout << "7. ������� �������� ���� �������� ����� �� �������" << endl;
		cout << "0. �����" << endl;
		cout << "������� ����� �������: ";
		
		cin >> c;
		switch (c)
		{
		case '1': {
			cout << endl << "---------------���������� ���������� ��� ����������---------------" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "������� ����� ������� �������� �� ������� �������� Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "����� ������� ������ �����������!" << endl;
				}					
			}
			nomer2 = -1;
			while ((nomer2 < 0) || (nomer2 >= size))
			{
				cout << "������� ����� ������� �������� �� ������� �������� Time: ";
				cin >> nomer2;
				if ((nomer2 < 0) || (nomer2 >= size))
				{
					cout << "����� ������� ������ �����������!" << endl;
				}					
			}
			cout << "1. ���������� ���������: �������_1 = ++ �������_2" << endl;
			cout << "2. ���������� ���������: �������_1 = -- �������_2" << endl;
			cout << "3. ����������� ���������: �������_1 = �������_2 ++" << endl;
			cout << "4. ����������� ���������: �������_1 = �������_2 --" << endl;
			cout << "������� ����� �������: ";
			cin >> c1;
			switch (c1) 
			{
			case '1': 
				time_array[nomer1] = ++ time_array[nomer2];
				cout << "������ ������� �����: " << time_array[nomer1] << endl;
				cout << "������ ������� �����: " << time_array[nomer2] << endl;
				break;

			case '2':
				time_array[nomer1] = -- time_array[nomer2];
				cout << "������ ������� �����: " << time_array[nomer1] << endl;
				cout << "������ ������� �����: " << time_array[nomer2] << endl;
				break;

			case '3':
				time_array[nomer1] = time_array[nomer2] ++;
				cout << "������ ������� �����: " << time_array[nomer1] << endl;
				cout << "������ ������� �����: " << time_array[nomer2] << endl;
				break;

			case '4':
				time_array[nomer1] = time_array[nomer2] --;
				cout << "������ ������� �����: " << time_array[nomer1] << endl;
				cout << "������ ������� �����: " << time_array[nomer2] << endl;
				break;
			default:
				cout << "��� ����� �������!" <<endl;
				break;
			}
			break;
		}
		case '2': {
			cout << endl << "----------------------�������� �������� Time----------------------" << endl;
			cout << "�������_1 = �������_2 + �������_3" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "������� ����� ������� �������� �� ������� �������� Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "����� ������� ������ �����������!" << endl;
				}					
			}
			nomer2 = -1;
			while ((nomer2 < 0) || (nomer2 >= size))
			{
				cout << "������� ����� ������� �������� �� ������� �������� Time: ";
				cin >> nomer2;
				if ((nomer2 < 0) || (nomer2 >= size))
				{
					cout << "����� ������� ������ �����������!" << endl;
				}					
			}
			nomer3 = -1;
			while ((nomer3 < 0) || (nomer3 >= size))
			{
				cout << "������� ����� �������� �������� �� ������� �������� Time: ";
				cin >> nomer3;
				if ((nomer3 < 0) || (nomer3 >= size))
				{
					cout << "����� ������� ������ �����������!" << endl;
				}					
			}
			time_array[nomer1] = time_array[nomer2] + time_array[nomer3];
			cout << "������ ������� �����: " << time_array[nomer1] << endl;
			cout << "������ ������� �����: " << time_array[nomer2] << endl;
			cout << "������ ������� �����: " << time_array[nomer3] << endl;
			break;
		}
		case '3': {
			cout << endl << "----------���������� �������� ��������� ��� ������� Time----------" << endl;
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
			cout << endl << "-------------���������� ������������ ��� ������� Time-------------" << endl;
			cout << "�������_1 = �������_2" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "������� ����� ������� �������� �� ������� �������� Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "����� ������� ������ �����������!" << endl;
				}					
			}
			nomer2 = -1;
			while ((nomer2 < 0) || (nomer2 >= size))
			{
				cout << "������� ����� ������� �������� �� ������� �������� Time: ";
				cin >> nomer2;
				if ((nomer2 < 0) || (nomer2 >= size))
				{
					cout << "����� ������� ������ �����������!" << endl;
				}					
			}
			time_array[nomer1] = time_array[nomer2];
			cout << "������ ������� �����: " << time_array[nomer1] << endl;
			cout << "������ ������� �����: " << time_array[nomer2] << endl;
			break;
		}
		case '5': {
			cout << endl << "----------------���������� ������� Time � ���� int----------------" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "������� ����� ������� �� ������� �������� Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "����� ������� ������ �����������!" << endl;
				}					
			}
			cout << "������ Time �����: " << time_array[nomer1] << endl;
			cout << "����������� �������� ������� ����� " << (int)time_array[nomer1] << endl;
			break;
		}
		case '6': {
			cout << endl << "--------���������� ���������� �����/������ ��� �������� Time--------" << endl;
			nomer1 = -1;
			while ((nomer1 < 0) || (nomer1 >= size))
			{
				cout << "������� ����� ����������� ������� �� ������� �������� Time: ";
				cin >> nomer1;
				if ((nomer1 < 0) || (nomer1 >= size))
				{
					cout << "����� ������� ������ �����������!" << endl;
				}					
			}
			cin >> time_array[nomer1];
			cout << "�������� ��� " << nomer1 << "-��� �������� ������� �������� �� " << time_array[nomer1] << endl;
			break;
		}			
		case '7': {
			cout << endl << "------------����� ���� �������� ����� �� �������------------" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << "����� ��� " << i << "-��� �������� ������� ����� " << time_array[i] << endl;
			}
			break;
		}		
		default:
			cout << "��� ����� �������!" <<endl;
			break;			
		}		
	}
}