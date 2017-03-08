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
#include "factory.h"
#include "product.h"
#include "util.h"

namespace dragon{
    

    static int _ = global_initiate_product(new ConcreteProduct());
    
}
