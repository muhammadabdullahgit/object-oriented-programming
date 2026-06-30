public class Item {
    private String name_of_item;
    private double price_of_item;
    private int quantity_of_item;
    public Item(String name_of_item, double price_of_item, int quantity_of_item) {
        this.name_of_item = name_of_item;
        this.price_of_item = price_of_item;
        this.quantity_of_item = quantity_of_item;
        public String get_name_of_item() {
        return name_of_item;
    }
    public double get_price_of_item() {
        return price_of_item;
    }
    public int get_quantity_of_item() {
        return quantity_of_item;
    }
    }