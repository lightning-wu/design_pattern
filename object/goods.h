/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file goods.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-27
 */
#ifndef DRAGON_GOODS_H
#define DRAGON_GOODS_H
#include <string>

namespace dragon{

    class Goods{
        public:
            Goods(){
                _name = "goods";
            }
            ~Goods(){}

            virtual std::string name(){
                return _name;
            }
            std::string _name;
    };


}

#endif

