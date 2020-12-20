# Звіт до лабораторної роботи №7 'Функції'
## Завдання №1 до лабораторної роботи №5

1. **Створення файлу**

	У терміналі, за допомогою команди cat>main5.1.c створюємо файл, для нашого майбутнього коду.
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

## Завдання №2 до лабораторної роботи №5 

1. **Створення файлу**

	У терміналі, за допомогою команди cat>main5.2.c створюємо файл, для нашого майбутнього коду.
2. **Кодування**

```
int pomosh(int number){
	int b=0,c=0,prostoe;
	while(c<=number){
		c++;
		if(number%c==0)
		b=b+c;
	};
	b=b-1;
	if(b==number){
		prostoe=1;
	}
	else{
		prostoe=0;
	}
	return prostoe;
}

int main(){
	srand(time(NULL));
	int fisrt=6,second=rand()%60,prostoe1,prostoe2;
	prostoe1=pomosh(fisrt);
	prostoe2=pomosh(second);
	return 0;
}
```
3. **Процес дебагінгу**

	За допомогою програми *nemiver* перевіряємо, щоб наші змінні, відповідали умові завдань, а результат мав сенс.

## Завдання №3 до лабораторної роботи №5 

1. **Створення файлу**

	У терміналі, за допомогою команди cat>main5.3.c створюємо файл, для нашого майбутнього коду.
2. **Кодування**

```
int luckycount(int number){
	int a,b,c,d,e,f,lucky=0,sum1,sum2,counter=0;
	for(int lim=100000;lim<=999999 && lim>99999;lim++){
		f=lim%10;
		e=(lim-f)%100/10;
		d=(lim-e*10-f)%1000/100;
		c=(lim-d*100-e*10-f)%10000/1000;
		b=(lim-c*1000-d*100-e*10-f)%100000/10000;
		a=(lim-b*10000-c*1000-d*100-e*10-f)%1000000/100000;
		sum1=a+b+c;
		sum2=d+e+f;
		if(sum1==sum2){
			counter++;
			if(lim==number){
				lucky=1;
			}
		}
		else{
			continue;
		}
	}
	return lucky;
}

int main(){
	srand(time(NULL));
	int first=194707,second=rand()%900000+100000,lucky1,lucky2;
	lucky1=luckycount(first);
	lucky2=luckycount(second);
	return 0;
}
```
3. **Процес дебагінгу**
	
	За допомогою програми *nemiver* перевіряємо, щоб наші змінні, відповідали умові завдань, а результат мав сенс.
	
## Завдання №4 до лабораторної роботи №5 

1. **Створення файлу**

	У терміналі, за допомогою команди cat>main5.4.c створюємо файл, для нашого майбутнього коду.
2. **Кодування**

```
int ifideal(int number){
	int ideal=0,b=0,c=0;
	while(c<=number){
		c++;
		if(number%c==0){
		b=b+c;
		}
		else{
		continue;
		};
	};
	if(b==number){
		ideal=1;
	}
	else{
		ideal=0;
	}
	return ideal;
}

int main(){
	srand(time(NULL));
	int first=15,second=rand()%20,ideal1=0,ideal2=0;
	ideal1=ifideal(first);
	ideal2=ifideal(second);
	return 0;
}
```
3. **Процес дебагінгу**
	
	За допомогою програми *nemiver* перевіряємо, щоб наші змінні, відповідали умові завдань, а результат мав сенс.
	
## Завдання №5 до лабораторної роботи №5 

1. **Створення файлу**

	У терміналі, за допомогою команди cat>main5.5.c створюємо файл, для нашого майбутнього коду.
2. **Кодування**

```
int sqrtcount(int number){
	int b=0,sqrt=0;
	if(b<=number){
		while(sqrt!=number){
			b++;
			sqrt=b*b;
		}
	}
	else{
		sqrt=0;
	}
	sqrt=b;
	return sqrt;
}

	else{
		sqrt=0;
	}
	sqrt=b;
	return sqrt;
}
```
3. **Процес дебагінгу**
	
	За допомогою програми *nemiver* перевіряємо, щоб наші змінні, відповідали умові завдань, а результат мав сенс.

## Завдання №1 до лабораторної роботи №7 

1. **Створення файлу**

	У терміналі, за допомогою команди cat>main.c створюємо файл, для нашого майбутнього коду.
2. **Кодування**

```
int couplecount(int n,...){
	va_list args;
	int i=0,size=n,counter=0;
	int mass[size];
	size=0;
	va_start(args, n);
	for(size;i<n;i++){   //Заполнения массива данными числами
		mass[size]=va_arg(args,int);
		size++;
	}
	i=0;
	for(size=0;i<n;i++){
		if(mass[size]<mass[size+1]){
			counter++;
		}
		size++;
	}
	va_end(args);
	return counter;
}

int main(){
	int couples = 0;
	couples=couplecount(5,4,2,4,6,7);
	return 0;
}
```
3. **Процес дебагінгу**
	
	За допомогою програми *nemiver* перевіряємо, щоб наші змінні, відповідали умові завдань, а результат мав сенс.
	
@author Kasyanov A.
@date 20-dec-2020
@version 1.0

