#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<Windows.h>

void main() {

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15);
	start:
	int a = 0;
	printf("����� �� �������� ����������������?\n1)��� �����\n2)����������\n3)� �� ���� �������� �� ����\n4)������������\n5)���������\n6)������������\n������� ����� ������� ������������� ������ ������\n__:");
	scanf("%d", &a);

	switch (a)
	{
	case 1: {
		SetConsoleTextAttribute(hConsole, 14);
		printf("������� �� Scratch,����� PYTHON\n");
		SetConsoleTextAttribute(hConsole, 15);
	}
			break;
	case 2: {
		printf("1)����� ������\n2)� ���� ���� ���� ��� ��������\n__:");
		scanf("%d", &a);

		switch (a)
		{
		case 1: {
			printf("����� ���������/�����?\n1)� ���� �������� � ������� IT ��������\n2)� ������ ���� �����\n3)B��\n4)����.����\n5)���������\n6)3D/����\n__:");
			scanf("%d", &a);
			switch (a)
			{
			case 1: {
				printf("1)Facebook\n2)Windows\n3)Google\n4)Apple\n__:");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("PYTHON\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("C#\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 3) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("PYTHON\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 4) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("[C]\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				
			}
					break;
			case 2: {
				SetConsoleTextAttribute(hConsole, 14);
				printf("JAVA\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
					break;
			case 3: {
				printf("1)��������(���-���������)\n2)������(��, ��� �� ���������)\n__: ");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVASCRIPT\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					printf("���� �������� ��...\n1)����������\n2)�������\n__:");
					scanf("%d", &a);
					switch (a)
					{
					case 1: {
						SetConsoleTextAttribute(hConsole, 14);
						printf("WINDOWS\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
							break;
					case 2: {
						printf("������ ����������� ��� �� �����,�� �� ����� ����������?\n1)��\n2)���\n3)�� ����\n__:");
						scanf("%d", &a);
						if (a == 1) {
							SetConsoleTextAttribute(hConsole, 14);
							printf("JAVASCRIPT\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2 || a == 3) {
							printf("����� � ��� ������� �������?\n1)LEGO\n2)���������\n3)����������,�� ������� �����\n__:");
							scanf("%d", &a);
							if (a == 1) {
								SetConsoleTextAttribute(hConsole, 14);
								printf("PYTHON\n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else if (a == 2) {
								SetConsoleTextAttribute(hConsole, 14);
								printf("RUBY\n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else if (a == 3) {
								SetConsoleTextAttribute(hConsole, 14);
								printf("PHP\n");
								SetConsoleTextAttribute(hConsole, 15);
							}

						}
					}
							break;
				
					default:
						break;
					}
				}
			
			}
					break;
			case 4: {
				printf("��� ������� � Windows?\n1)����� ���\n2)�� �����\n3)����\n__:");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("C#\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2 || a == 3) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVA\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
					break;
			case 5: {
				printf("����� OS?\n1)IOS\n2)Android");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("[C]\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVA\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
					break;
			case 6: {
				SetConsoleTextAttribute(hConsole, 14);
				printf("C++\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			default:
				break;
			}






		}
				break;
		case 2: {
			printf("����� ���������/�����?\n1)���\n2)����.����\n3)���������\n4)3D/����\n__:");
			scanf("%d", &a);
			switch (a)
			{
			case 1: {
				printf("��� ������ ����� �������� � �������� ������� ��� twitter?\n1)��\n2)���\n__:");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVASCRIPT\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					printf("������ ����������� ��� �� �����,�� �� ����� ����������?\n1)��\n2)���\n3)�� ����\n__:");
					scanf("%d", &a);
					if (a == 1) {
						SetConsoleTextAttribute(hConsole, 14);
						printf("JAVASCRIPT\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else if (a == 2 || a == 3) {
						printf("����� � ��� ������� �������?\n1)LEGO\n2)���������\n3)����������,�� ������� �����\n__:");
						scanf("%d", &a);
						if (a == 1) {
							SetConsoleTextAttribute(hConsole, 14);
							printf("PYTHON\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2) {
							SetConsoleTextAttribute(hConsole, 14);
							printf("RUBY\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 3) {
							SetConsoleTextAttribute(hConsole, 14);
							printf("PHP\n");
							SetConsoleTextAttribute(hConsole, 15);
						}

					}

				}

			}
					break;
			case 2: {
				printf("��� ������� � Windows?\n1)����� ���\n2)�� �����\n3)����\n__:");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("C#\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2 || a == 3) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVA\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
					break;
			case 3: {
				printf("����� OS?\n1)IOS\n2)Android");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("[C]\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVA\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
					break;
			case 4: {
				SetConsoleTextAttribute(hConsole, 14);
				printf("C++\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			default:
				break;
			}
		}
				break;
		default:
			break;
		}
	}
			break;
	case 3: {
		SetConsoleTextAttribute(hConsole, 14);
		printf("PYTHON\n");
		SetConsoleTextAttribute(hConsole, 15);
	}
			break;
	case 5:
	case 6:
	case 4: {
		printf("��� ���� ���� �� �������?\n1)��\n2)���.������ ���� ������\n__:");
		scanf("%d", &a);
		switch (a)
		{
		case 1: {
			printf("����� ���������/�����?\n1)���\n2)����.����\n3)���������\n4)3D/����\n__:");
			scanf("%d", &a);
			switch (a)
			{
			case 1: {
				printf("��� ������ ����� �������� � �������� ������� ��� twitter?\n1)��\n2)���\n__:");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVASCRIPT\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					printf("������ ����������� ��� �� �����,�� �� ����� ����������?\n1)��\n2)���\n3)�� ����\n__:");
					scanf("%d", &a);
					if (a == 1) {
						SetConsoleTextAttribute(hConsole, 14);
						printf("JAVASCRIPT\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else if (a == 2 || a == 3) {
						printf("����� � ��� ������� �������?\n1)LEGO\n2)���������\n3)����������,�� ������� �����\n__:");
						scanf("%d", &a);
						if (a == 1) {
							SetConsoleTextAttribute(hConsole, 14);
							printf("PYTHON\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2) {
							SetConsoleTextAttribute(hConsole, 14);
							printf("RUBY\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 3) {
							SetConsoleTextAttribute(hConsole, 14);
							printf("PHP\n");
							SetConsoleTextAttribute(hConsole, 15);
						}

					}

				}

			}
					break;
			case 2: {
				printf("��� ������� � Windows?\n1)����� ���\n2)�� �����\n3)����\n__:");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("C#\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2 || a == 3) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVA\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
					break;
			case 3: {
				printf("����� OS?\n1)IOS\n2)Android");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("[C]\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVA\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
					break;
			case 4: {
				SetConsoleTextAttribute(hConsole, 14);
				printf("C++\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			default:
				break;
			}
		}
				break;
		case 2: {
			printf("�������� ���������� ��� ���\n1)������� ��������\n2)������ ��������\n3)����������� ��������\n4)����� ������� ����� (�� ����� ����� �����)\n__:");
			scanf("%d", &a);
			if (a == 1 || a == 2) {
				SetConsoleTextAttribute(hConsole, 14);
				printf("PYTHON\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 3) {
				printf("����� ������� �������?\n1)�������\n2)������\n__:");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVA\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("C\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (a == 4) {
				SetConsoleTextAttribute(hConsole, 14);
				printf("C++\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
				break;

		default:
			break;
		}
	}
			break;
	

	default:
		break;
	}
	goto start;

}