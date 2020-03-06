public class Main1 : Gtk.Application {
    public Main1() {
        Object (
            application_id: "main1_araggna",
            flags: ApplicationFlags.FLAGS_NONE
        );
    }
    protected override void activate () {
        var window = new Gtk.ApplicationWindow (this);
        window.title = "just re";
        window.border_width = 10;
        window.window_position = Gtk.WindowPosition.CENTER;
        window.set_default_size (350, 88);        
        window.show_all ();
    }
    public static int main (string[] args) {
        var test = new Main1 ();
        return test.run (args);

        
    }

}

