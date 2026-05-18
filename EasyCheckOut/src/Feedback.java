public class Feedback {
    private String comment;
    private int rating;

    public Feedback(String comment, int rating) {
        this.comment = comment;
        this.rating = rating;
    }

    public String getComment() { return comment; }
    public int getRating() { return rating; }
}
