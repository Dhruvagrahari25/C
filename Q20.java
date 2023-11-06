public class Q20 {
    public static void main(String[] args) {
        String str = "   Hello world! this is a Java program.   ";
        System.out.println("Original String:");
        System.out.println(str);
        System.out.println();

        //concat
        String ConcatedStr = str.concat("Java is object Oriented");
        System.out.println("Contatenation: "+ConcatedStr);
        System.out.println();

        //replace
        String ReplacedStr = str.replaceAll("Java", "C++");
        System.out.println("Replaced words: "+ReplacedStr);
        System.out.println();

        //To Upper Case
        String UpperCasedStr = str.toUpperCase();
        System.out.println("Upper Cased: "+UpperCasedStr);
        System.out.println();

        //to lower cased
        String LowerCasedStr = str.toLowerCase();
        System.out.println("Lower Cased: "+LowerCasedStr);
        System.out.println();

        //trim....?
        String StrippedStr = str.strip();
        System.out.println("Strip: "+StrippedStr);
        System.out.println();

    }
}
