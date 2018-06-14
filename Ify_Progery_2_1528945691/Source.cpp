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
	printf("Зачем вы изучаете программирование?\n1)Для детей\n2)Заработать\n3)Я не знаю выберите за меня\n4)Поразвлечься\n5)Интересно\n6)Саморазвитие\nВведите цифру которая соответствует вашему ответу\n__:");
	scanf("%d", &a);

	switch (a)
	{
	case 1: {
		SetConsoleTextAttribute(hConsole, 14);
		printf("Начните со Scratch,затем PYTHON\n");
		SetConsoleTextAttribute(hConsole, 15);
	}
			break;
	case 2: {
		printf("1)Найти работу\n2)У меня есть идея для стартапа\n__:");
		scanf("%d", &a);

		switch (a)
		{
		case 1: {
			printf("Какая платформа/сфера?\n1)Я хочу работать в крупной IT компании\n2)Я просто хочу денег\n3)Bеб\n4)Корп.софт\n5)Мобильная\n6)3D/игры\n__:");
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
				printf("1)Фронтенд(веб-интерфейс)\n2)Бэкенд(то, что за вебсайтом)\n__: ");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVASCRIPT\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					printf("Хочу работать на...\n1)Корпорацию\n2)Стартап\n__:");
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
						printf("Хотите попробовать что то новое,но не очень трудаемкое?\n1)Да\n2)Нет\n3)Не знаю\n__:");
						scanf("%d", &a);
						if (a == 1) {
							SetConsoleTextAttribute(hConsole, 14);
							printf("JAVASCRIPT\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2 || a == 3) {
							printf("Какая у Вас любимая игрушка?\n1)LEGO\n2)Пластилин\n3)Старенький,но любимый мишка\n__:");
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
				printf("Что скажете о Windows?\n1)Люблю его\n2)Не плохо\n3)Фууу\n__:");
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
				printf("Какая OS?\n1)IOS\n2)Android");
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
			printf("Какая платформа/сфера?\n1)Веб\n2)Корп.софт\n3)Мобильная\n4)3D/игры\n__:");
			scanf("%d", &a);
			switch (a)
			{
			case 1: {
				printf("Ваш сервис будет работать в реальном времени как twitter?\n1)Да\n2)Нет\n__:");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVASCRIPT\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					printf("Хотите попробовать что то новое,но не очень трудаемкое?\n1)Да\n2)Нет\n3)Не знаю\n__:");
					scanf("%d", &a);
					if (a == 1) {
						SetConsoleTextAttribute(hConsole, 14);
						printf("JAVASCRIPT\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else if (a == 2 || a == 3) {
						printf("Какая у Вас любимая игрушка?\n1)LEGO\n2)Пластилин\n3)Старенький,но любимый мишка\n__:");
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
				printf("Что скажете о Windows?\n1)Люблю его\n2)Не плохо\n3)Фууу\n__:");
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
				printf("Какая OS?\n1)IOS\n2)Android");
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
		printf("Уже есть идея на миллион?\n1)Да\n2)Нет.Просто хочу начать\n__:");
		scanf("%d", &a);
		switch (a)
		{
		case 1: {
			printf("Какая платформа/сфера?\n1)Веб\n2)Корп.софт\n3)Мобильная\n4)3D/игры\n__:");
			scanf("%d", &a);
			switch (a)
			{
			case 1: {
				printf("Ваш сервис будет работать в реальном времени как twitter?\n1)Да\n2)Нет\n__:");
				scanf("%d", &a);
				if (a == 1) {
					SetConsoleTextAttribute(hConsole, 14);
					printf("JAVASCRIPT\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2) {
					printf("Хотите попробовать что то новое,но не очень трудаемкое?\n1)Да\n2)Нет\n3)Не знаю\n__:");
					scanf("%d", &a);
					if (a == 1) {
						SetConsoleTextAttribute(hConsole, 14);
						printf("JAVASCRIPT\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else if (a == 2 || a == 3) {
						printf("Какая у Вас любимая игрушка?\n1)LEGO\n2)Пластилин\n3)Старенький,но любимый мишка\n__:");
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
				printf("Что скажете о Windows?\n1)Люблю его\n2)Не плохо\n3)Фууу\n__:");
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
				printf("Какая OS?\n1)IOS\n2)Android");
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
			printf("Выберите подходящее для Вас\n1)Простым способом\n2)Лучшим способом\n3)Трудненьким способом\n4)Очень сложным путем (но потом будет легче)\n__:");
			scanf("%d", &a);
			if (a == 1 || a == 2) {
				SetConsoleTextAttribute(hConsole, 14);
				printf("PYTHON\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 3) {
				printf("Какая коробка передач?\n1)Автомат\n2)Ручная\n__:");
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