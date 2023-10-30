public class string {
    public static void main(String[] args){
        // literal
        String a = "Happy Java";
        String b = "a";
        String c = "123";
        // object
        String d = new String("Happy Java");
        String e = new String("a");
        String f = new String("123");
        // primitive
        boolean result = true;
        char g = 'A';
        int i = 100000;
        /* Wrapper: to synchronize in multi-threading
         * int - integer / long - Long / double - Double / float - Float / boolean - Boolean / char - Character
         */

         // internal methods
         // equals
         System.out.println(a.equals(d));   // true
         System.out.println(b.equals(f));   // false
         System.out.println(c.equals(e));   // false
         /* "==" is for comparing two "objects", so a == d is False. */

         // indexof


    }
}
