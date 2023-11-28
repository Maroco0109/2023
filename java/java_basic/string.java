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
        /*
        boolean result = true;
        char g = 'A';
        int i = 100000;
        Wrapper: to synchronize in multi-threading
        int - integer / long - Long / double - Double / float - Float / boolean - Boolean / char - Character
        */

        // internal methods
        // equals
        System.out.println(a.equals(d));   // true
        System.out.println(b.equals(f));   // false
        System.out.println(c.equals(e));   // false
        /* "==" is for comparing two "objects", so a == d is False. String is literal and new String is object. */

        // indexof: returns String's start index.
        System.out.println(a.indexOf("Java")); // returns 6

        // contains: returns if certain String exists.
        System.out.println(a.contains("Java"));

        // charAt: returns certain character's in String.
        System.out.println(a.charAt(6));    // returns J

        // replaceAll: chage certain String to other String.
        System.out.println(a.replaceAll("Java", "World"));   // returns Happy World

        // substring: returns certain String in String.
        System.out.println(a.substring(0,4));   // returns Hell

        // toUpperCase: make String to capital letters.
        System.out.println(a.toUpperCase());

        // split: returns string array split by certain delimeter
        String a2 = "A:B:C:D";
        String[] result = a.split(":"); // returns {"A","B","C","D"}

        // String Formating
        // String.format
        System.out.println(String.format("I eat %d apples.",3));    // returns "I eat 3 apples."

        // insert string
        System.out.println(String.format("I eat %s apples.", "five"));   // returns "I eat five apples."

        // insert integer value
        int number = 3;
        System.out.println(String.format("I eat %d apples.",number));   // returns "I eat 3 apples."
    }
}
