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
        
    }

}

