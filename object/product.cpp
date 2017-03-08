/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file product.cpp
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-24
 */
#include <iostream>
#include "factory.cpp"
#include "product.h"
#include "util.h"

namespace dragon{
    

    static int _ = global_initiate_product(new Product());
    
    int Product::initiate_product(){
        Factory<Product> * factory = Factory<Product>::instance();
        std::string product_name = name();
        factory->register_object(product_name, this); 
        std::cout << "register " << product_name << std::endl;
        return 0;
    }
    
}
