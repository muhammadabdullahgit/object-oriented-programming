public class DiscountedItem extends Item {//inherits Item class
private double discount_rate_for_item;
public DiscountedItem(String name_of_item, double price_of_item, int quantity_of_item,double discount_rate_for_item) {
        this.name_of_item=name_of_item;
        this.price_of_item=price_of_item;
        this.quantity_of_item=quantity_of_item;
        this.discount_rate_for_item = discount_rate_for_item;
    }
    public double getDiscountedPrice() {
        double price;
        price=price_of_item -  discount_rate_for_item;
        return price;
    }
}