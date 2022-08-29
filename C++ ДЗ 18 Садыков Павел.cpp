//
//  main.cpp
//  C++ ДЗ 18 Садыков Павел
//
//  Created by Павел on 28.08.2022.
//

#include <iostream>
using namespace std;

//Задача 1
inline double mid(double A, double B, double C){
    cout<<"Среднее арифметическое чисел : \n";
    return (A+B+C)/3;
}

//Задача 2
double maximum (double A, double B, double C){
    cout<<"Максимальное число,тип данных 'вещественный': \n";
    return A>(B>C ? B:C) ? A:(B>C ? B:C);
}

short maximum  (short A, short B, short C ){
    cout<<"Максимальное число,тип данных 'short': \n";
    return A>(B>C ? B:C) ? A:(B>C ? B:C);
}

int maximum  (int A, int B, int C ){
    cout<<"Максимальное число,тип данных 'целый': \n";
    return A>(B>C ? B:C) ? A:(B>C ? B:C);
    
}

//Задача 3
template <typename T>
T min_arr(T arr [], const int lenght){
T min = arr[0];
    for (int i = 0; i < lenght; i++)
        if (min > arr[i])
            min = arr[i];
    return min;}


int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Rus");
  
    cout<<"\nЗадача 1. \nВведите три числа : \n";
    double n,m,l;
    cin>>n>>m>>l;
    cout<<mid (n,m,l)<<endl;
    
    cout<<"\nЗадача 2.  \n";
    cout<<maximum (3,57,100)<<endl;
    cout<<maximum (0.4,89.2,3.4)<<endl;
    short sh1=30, sh2=5, sh3=90;
    cout<< maximum (sh1,sh2,sh3)<<endl;;
    
    
    cout<<"\nЗадача 3. \n";
    int iArr [6] = {1,25,47,2,19,3};
    cout << "Минимальный элемент массива типа int: " << min_arr(iArr, 6) << endl;
    
    double dArr [5]={1.3,5.5,1.1,45.7,33.2};
    cout << "Минимальный элемент массива типа double: " << min_arr(dArr, 5) << endl;
  
    
    
    return 0;
}
