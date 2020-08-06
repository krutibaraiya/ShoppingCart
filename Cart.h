//
// Created by Kruti on 06-08-2020.
//

#ifndef SHOPPINGCART_CART_H
#define SHOPPINGCART_CART_H

#include "Apparel.h"

class Cart
{
public:

    virtual Apparel get_apparel(int index) const = 0;
    virtual void add_apparel(const Apparel& a) = 0;
    virtual bool is_in_cart(const Apparel& a) const = 0;
    virtual Apparel remove_any_apparel() = 0;
    virtual void remove_apparel(const Apparel& a) = 0;
    virtual void clear_cart() = 0;
    virtual bool is_cart_empty()const = 0;
    virtual int apparel_total() const = 0;
    virtual int apparel_size_total(ApparelSize size)const = 0;
    virtual int apparel_type_total(ApparelType t) const = 0;
    virtual void print_apparels() const = 0;




};








#endif //SHOPPINGCART_CART_H
