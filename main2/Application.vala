public class Application : Gtk.Application {
    public Application() {
        Object (
            application_id: "main1_araggna",
            flags: ApplicationFlags.FLAGS_NONE
        );
    }
    protected override void activate () {
        var window = new MyApp.Window (this);
        add_window (window);
        //  window.title = "just re";
        //  window.border_width = 10;
        //  window.window_position = Gtk.WindowPosition.CENTER;
        //  window.set_default_size (350, 88);        
        //  window.show_all ();
    }

}

