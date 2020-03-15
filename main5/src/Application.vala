public class Application : Gtk.Application {
    public Application() {
        Object (
            application_id: "com.app.araggna",
            flags: ApplicationFlags.FLAGS_NONE
        );
    }
    protected override void activate () {
        var window = new araggna.Window (this);
        add_window (window);
        
    }

}

