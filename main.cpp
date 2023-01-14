//
//  main.cpp
//  STL - container - 2
//
//  Created by Павел on 13.01.2023.
//STL-контейнеры
// Шаблоны классов
//Наследование шаблонов классов
#include <forward_list>
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <utility>//std::pair
#include <unordered_map>
#include "Race.h"

template<typename T>
struct Node{
    T val;// значение узла ( какую инфу он хранит)
    Node<T> *prev;//предыдущий сосед
    Node<T> *next;//следующий сосед
    
};
template<typename T>
struct Node_of_forward_list{
    T val;
    Node_of_forward_list<T> *next;
};




template<typename T>
class Calculator
{
public:
    //Calculator(T &a, T &b): _a(a),_b(b) {};
    Calculator(){
        
    }
    T getSum(){
        return _a +_b;
    }
    T getSub(){
        return _a -_b;
    }
    T getDiv(){
        if(_b!=0)
            return _a /_b;
        return 1;
    }
    T getMultiply (){
        return  _a *_b;
    }
      
   void setA(T a){
        _a=a;
       
    }
   void setB(T b){
        _b=b;
    }
        
private:
    T _a;
    T _b;
};


int main(int argc, const char * argv[]) {
    double a=0,b=0;
  
    Calculator <double> d;
    std::cout<< "Введите  А :\n";
    std::cin>>a;
    d.setA(a);
    std::cout<< "Введите  B :\n";
    std::cin>>b;
    d.setB( b);
    std::cout<<"Сумма = ";
    std::cout<<d.getSum()<<std::endl;
    std::cout<<"Разность = ";
    std::cout<<d.getSub()<<std::endl;
    std::cout<<"Частное = ";
    std::cout<<d.getDiv()<<std::endl;
    std::cout<<"Произведение = ";
    std::cout<<d.getMultiply()<<std::endl;
    std::cout<<std::endl;
    
    /*
    
    Race<Car>myRace;
    Car c1(50,"BMW");
    Car c2(60, "Mercedess");
    
    myRace.race(c1,c2);
    
    */
    
    /*
        
    std::forward_list<int>fwl;
    fwl.push_front(1);
    fwl.push_front(2);
    fwl.push_front(3);
    auto i = 5;
    for(const auto &el : fwl){
        std::cout<< el <<" ";
    }
    std::cout<<std::endl;
    
   
    Node <int>*n= new Node<int>();
    Node <int>*n2= new Node<int>();
    n->next = n2;
    std::vector<int>vec2;
    vec2.push_back(n->val);
    while (n->next !=nullptr) {
    vec2.push_back(n->next->val);
        n=n->next;
        
        
    }
    
    std::vector<int>vec{1,2,3};
    // range-based for loop
    for(const auto &el : vec){
        
    }
    for(std::vector<int>::const_iterator it= vec.begin();
        it!=vec.end(); it++){
        
    }
    //быстрее в случае, если бежим от начала к концу вектора
    // [][][]
    for(int i = 0; i < vec.size();i++){
        int x =vec[i];
    }
   
    
    // list - двусвязный список, он состоит из узлов (Node), а каждый узел знает про предыдущего и последующего соседа ( в узле есть указатель на предыдущий и последующий элементы). List удобен, если нам нужно часто удалять один и тот же элемент и его же вставлять.
   // Работает дольше чем вектор
    
    std::list<int>myList;
    
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);
    
    for(const auto &el : myList){
        std::cout<<el<<"  ";
    }
    std::cout<<'\n';
    
    myList.push_front(0);
    myList.push_front(-1);
    myList.push_front(-2);
    
    for(const auto &el : myList){
        std::cout<<el<<"  ";
    }
    std::cout<<'\n';
   
    
    
    
    
    std::map<int, std::string> myMap;
    myMap[245]="abc"; //способ вставить знач через квадр скобки
    myMap.insert({5,"Bob"});
    myMap.insert(std::make_pair(5, "Bob"));
    
     
    std::pair<int, std::string> myPair;
    myPair.first = 4;
    myPair.second = "Tanya";
    
    myMap.insert(myPair);
     
    for(const auto &[key, value] : myMap){
        std::cout<< key <<" "<<value<<"\n";
    }
    std::cout<<std::endl;
    //тот же вывод другим способом
    for(const auto & el : myMap){
        std::cout<< el.first <<" "<<el.second<<"\n";
    }
    std::cout<<std::endl;
     */


    
    
    
    
    std::unordered_map<int, std::string>umap;
    
    umap.insert({1,"hello"});
    umap.insert({2,"how are you"});
    umap.insert({3,"ok"});
    // insert -> hash(key) - >hashed_key   - происходит хэширование , то есть шифрование  в одну  сторону , для каждой цифры(id) выдается  свой уникальный код. Поэтому памяти требуется больше чем для  простой Map.  Большая скорость обработки и поиска, но много тратится памяти.
    // хэш может не стать уникальным  - это коллизия. Сортировки нет.
    
    for(const auto &[key, value] : umap){
        std::cout<< key <<" "<<value<<"\n";
    }
    std::cout<<std::endl;
    
    
    
    //когда пытаемся вставить значение в один ключ - на экране 0 это значит не вставит. 1 - все ок.
    std::map<int, std::string>mymap2;
    mymap2.insert({5,"ASD"});
    const auto& [it,isInserted]=mymap2.insert({5,"def"});
    std::cout<<"isInserted: "<<isInserted<<std::endl;
    
   
    
    
    return 0;
}
