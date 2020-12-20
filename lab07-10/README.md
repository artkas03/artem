# Звіт до лабораторної роботи №7 'Функції'
## Завдання №1 до п'ятої лабораторної роботи

1. **Створення файлу**
	У терміналі, за допомогою команди cat>main5.1.c створюємо файл, для нашого майбутнього коду 
2. **Кодування**
```
int get_rand(){
	srand(time(NULL));
	int a;
	a=rand()%10;
	return a;
}

int nodcounter(int first,int second){
	int nod=0,a=0;
	while(a<=first && a<=second){
		a++;
		if(first%a==0 && second%a==0){
			nod=a;
		}
	}
	return nod;
}

int main(){
	int first = 140,second = 1400,nod1,first2=0,second2=0,nod2;
	nod1=nodcounter(first,second);
	first2 = get_rand();
	second2 = get_rand();
	nod2=nodcounter(first2,second2);
	return 0;
}
```
3. **Процес дебагінгу**
	За допомогою програми *nemiver* перевіряємо, щоб наші змінні, відповідали умові завдань, а результат мав сенс.
@author Kasyanov A.
@date 20-dec-2020
@version 1.0

