public class ShoppingCart {
private Item[] item;// item class array
private int capacity_of_cart;
private int size_of_cart;
public ShoppingCart(int capacity_of_cart) {
        this.capacity_of_cart = capacity_of_cart;
    }
    public void addItem(Item new_item) {
        if(capacity_of_cart>size_of_cart){
            item[size_of_cart++]=new_item;
            System.out.println("item is added");
        }
        else{
            System.out.println("item is not added. capacity of cart is full")
        }
    }
    public void viewCart(){
        for(Item i:item){
             System.out.println("name ="+i.get_name_of_item()+"\n");
             System.out.println("price ="+i.get_price_of_item()+"\n");
             System.out.println("quantity ="+i.get_quantity_of_item()+"\n");
        }
    }
    double calculateTotal(){
        double x;
         for(Item i:item){
         x+=i.get_price_of_item(); 
         }
    return x;
    }
    void checkout(){
        double checkout=viewCart();
        System.out.println("total bill = "+checkout);   
    }
}