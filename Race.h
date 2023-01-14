//
//  Race.h
//  STL - container - 2
//
//  Created by Павел on 13.01.2023.
//

#ifndef Race_h
#define Race_h
#include <iostream>


template<typename T>
class Race{
public:
    void race( T&ihs,  T &rhs){
        if(rhs.getSpeed()>ihs.getSpeed()){
            std::cout<<rhs.getName()<<"has won!\n";
            
        }
        else if(rhs.getSpeed()==ihs.getSpeed()){
            std::cout<<rhs.getName()<<" and "<<ihs.getName()<<"went draw!\n";
                    }
        else{
            std::cout<<ihs.getName()<<"has won!\n";
            
        }
    }
};

class Motorcycle{
public:
    Motorcycle(int speed, const std:: string& name): _speed(speed), _name(name){}
              
    int getSpeed(){
        return _speed;
    }
    const std::string &getName(){
        return _name;
    }
private:
    int _speed;
    std::string _name;
};




class Car{
public:
    Car(int speed, const std:: string& name): _speed(speed), _name(name){}
              
    int getSpeed(){
        return _speed;
    }
    const std::string &getName(){
        return _name;
    }
private:
    int _speed;
    std::string _name;
};









#endif /* Race_h */
