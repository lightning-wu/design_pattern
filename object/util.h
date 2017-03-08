/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file util.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-25
 */
#ifndef DRAGON_UTIL_H
#define DRAGON_UTIL_H
#include "machine.h"
#include "product.h"

namespace dragon{

    static int global_initiate_product(Product* product){
        return product->initiate_product();
    }

    static int global_initiate_machine(Machine* machine){
        return machine->initiate_machine();
    }
}
#endif
