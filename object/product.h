/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file product.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-24
 */
#ifndef DRAGON_PRODUCT_H
#define DRAGON_PRODUCT_H
#include <string>
#include "goods.h"

namespace dragon{

    class Product : public Goods{
        public: 
            Product(){
                _name = "product";
            }
            ~Product(){}
            virtual Product* clone(){
                return new Product();
            }
            virtual int initiate_product();
    };

    class ConcreteProduct : public Product{
        public:
            ConcreteProduct(){
                _name = "concreteproduct";
            }
            ~ConcreteProduct(){}
            
            virtual Product* clone(){
                return new ConcreteProduct();
            }

    };
}
#endif

