#include<bits/stdc++.h>
#include "Cart.h"
#include "Apparel.h"
#include "Cart_Vector.h"
#include "Cart_Linkedlist.h"

using namespace std;

int main()
{
    Cart_Linkedlist apparelCart;

    if(apparelCart.is_cart_empty())
    {
        cout << "Your Shopping Cart is empty. " << endl;
    }
    cout << endl << "Buy yourself some outfits. " << endl;

    apparelCart.add_apparel(Apparel(vogue_top,small));
    apparelCart.add_apparel(Apparel(bare_cardigan,large));
    apparelCart.add_apparel(Apparel(levis_tshirt,small));

    cout << endl << "Your cart now has : ";
    apparelCart.print_apparels();

    cout << endl << endl << "Total items : " << apparelCart.apparel_total() << endl;

    return 0;
}
