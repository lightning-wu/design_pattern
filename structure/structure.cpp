/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file structure.cpp
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-28
 */

#include "structure.h"

namespace dragon{

    void Proxy::method(){
        _realsub->method();
    }
    
    void Adapter::method(){
        _realsub->method();
    }

    void Decorator::method(){
        _sub->method();
        self_method();
    }
    
    void Decorator::self_method(){
        std::cout << "Decorator self method" << std::endl;
    }

    void Decorator1::self_method(){
        std::cout << "Decorator1 self method" << std::endl;
    }
}
