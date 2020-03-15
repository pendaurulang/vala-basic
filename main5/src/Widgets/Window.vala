public class araggna.Window : Gtk.ApplicationWindow {
    public Window(Application app) {
        Object (
            application: app
        );
    }

    construct{
        title = "just re";
        window_position = Gtk.WindowPosition.CENTER;
        set_default_size (350, 88);        
        
        show_all ();
    }
}