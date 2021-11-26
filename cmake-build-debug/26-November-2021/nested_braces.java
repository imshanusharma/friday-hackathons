// Problem D (Nested Brackets) CodeChef

//package Practice;
import java.util.*;

public class nested_braces {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack<Character> s = new Stack<>();
        int test = sc.nextInt();
        while(test-- > 0) {
            String str = sc.next();
            for(int i = 0; i < str.length(); i++)
            {
                switch(str.charAt(i))
                {
                    case '(' :
                    {
                        s.push('(');
                        break;
                    }
                    case '[' :
                    {
                        s.push('[');
                        break;
                    }
                    case '{' :
                    {
                        s.push('{');
                        break;
                    }
                    case ')' :
                    {
                        if(s.peek() != '(')
                        {
                            break;
                        }
                        else
                        {
                            s.pop();
                        }
                        break;
                    }
                    case '}' :
                    {
                        if(s.peek() != '{')
                        {

                            break;
                        }
                        else
                        {
                            s.pop();
                        }
                        break;
                    }
                    case ']' :
                    {
                        if(s.peek() != '[')
                        {
                            break;
                        }
                        else
                        {
                            s.pop();
                        }
                        break;
                    }
                }
            }
            if(s.isEmpty())
            {
                System.out.println("yes");
            }
            else{
                System.out.println("no");
            }
        }
    }
}
