import java.util.Random;

public class ascii {
    public static void main(String[] args) {
        String toConsole = "";
        Random random = new Random();

        while (true) {
            for (int x = 0; x < 3; x++) {
                int randomNumber = (int)(Math.random() * 21);

                for (int i = 0; i < randomNumber; i++) {
                    toConsole += " ";
                }

                toConsole += random.nextInt(1 - 0 + 1) + 0;
            }
            System.out.println(toConsole);

            try {
                Thread.sleep(15); // Handle InterruptedException
            } catch (InterruptedException e) {
                System.err.println("Thread was interrupted: " + e.getMessage());
                Thread.currentThread().interrupt(); // Restore the interrupted status
            }
        }
    }
}