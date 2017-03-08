/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file factory.cpp
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-24
 */
#include <iostream>
#include "factory.h"
//#include "product.h"

namespace dragon{
    
    template <typename Class> 
    Factory<Class>* Factory<Class>::g_factory = NULL;
    
    template <typename Class>
    Class* Factory<Class>::create_object(std::string name){
        if (_map.find(name) == _map.end()){
            std::cerr << "object " << name << " is not exist" << std::endl;
            return NULL;
        }
        Class *object = _map[name]->clone();
        std::cout << "factory create object " << name << " ok" << std::endl;
        return object; 
    }
    
    template <typename Class>    
    Factory<Class>* Factory<Class>::instance(){
        if (g_factory == NULL){
            std::cout << " create factory " << std::endl;
            g_factory = new Factory<Class>();
        } 
        return g_factory;
    }
    
    template <typename Class>
    Class* Factory<Class>::register_object(std::string name, Class* object){
        if (_map.find(name) == _map.end()){
            _map[name] = object;
        }
        return object;
    }

}
