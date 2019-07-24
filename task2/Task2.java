class Task2 {
    public static void main(String args[])
    {
        int current = 1;
        int previous = 0;
        int summary = 0;
        int temp = 0;
        while (current + previous <= 4000000)
        {
            temp = current;
            current += previous;
            previous = temp;
            if (current%2 == 0) summary += current;
        }
        System.out.println(summary);
    }
}