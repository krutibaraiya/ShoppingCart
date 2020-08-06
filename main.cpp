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

    cout << "\n Small apparels: " << apparelCart.apparel_size_total(small);
    cout << "\n Medium apparels: " << apparelCart.apparel_size_total(medium);
    cout << "\n Large apparels: " << apparelCart.apparel_size_total(large) << endl;

    cout << "\nvogue_top: " << apparelCart.apparel_type_total(vogue_top);
    cout << "\nbare_cardigan: " << apparelCart.apparel_type_total(bare_cardigan);
    cout << "\nlevis_tshirt: " << apparelCart.apparel_type_total(levis_tshirt);

    cout << "\n\n--------------\nRemove any apparel which you do not like ";
    Apparel a = apparelCart.remove_any_apparel();
    cout << "\nRemoved apparel: ";
    a.print();

    cout << "\n Your cart now has: ";
    apparelCart.print_apparels();

    return 0;
}
