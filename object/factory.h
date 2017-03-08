/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file factory.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-24
 */
#ifndef DRAGON_FACTORY_H
#define DRAGON_FACTORY_H
#include <map>
#include <string>
#include <iostream>

namespace dragon{
    //class Product;
    template <typename Class>
    class Factory{
        private:
            Factory(){}
        public:
            ~Factory(){}
            
            Class* create_object(std::string name);
            static Factory* instance();
            Class* register_object(std::string name, Class* obj);

            std::map<std::string, Class*> _map;
            static Factory* g_factory;
    };
}
#endif
