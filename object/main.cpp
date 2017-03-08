/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file main.cpp
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-24
 */

#include "factory.cpp"
#include "product.h"
#include "machine.h"

using namespace dragon;

int main(){

    Factory<Product>* factory = Factory<Product>::instance();
    factory->create_object("product");
    factory->create_object("concreteproduct");
    factory->create_object("dfs");
    Factory<Machine>* factory_m = Factory<Machine>::instance();
    factory_m->create_object("machine");
    return 0;
}
