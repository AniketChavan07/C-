class Pen {
 String  color;
 String type ;
 public void write (){
    System.out.println("writting something");
 }
}

public class OOPS {
    public static void main(String args[]){
        Pen pen1 = new Pen();
        pen1.color="blue"// to acces the properties of class using a dot .
        pen1.type ="Ball";
        pen1.write();
    }
}
