public class araggna.Window : Gtk.ApplicationWindow {
    public GLib.Settings settings;

    public Window(Application app) {
        Object (
            application: app
        );
    }

    construct{
        //title = "just re";
        window_position = Gtk.WindowPosition.CENTER;
        set_default_size (350, 88);        
        
        settings = new Settings("com.app.araggna");
        move (settings.get_int ("pos-x"), settings.get_int ("pos-y"));
        resize (settings.get_int ("window-width"), settings.get_int ("window-height"));

        delete_event.connect (e => {
            return before_destroy ();
        });

        var headerbar = new araggna.HeaderBar ();
        set_titlebar (headerbar);

        show_all ();
    }
    public bool before_destroy () {
      int width, height, x, y;
      
      get_size (out width, out height);
      get_position (out x, out y);

      settings.set_int ("pos-x", x);
      settings.set_int ("pos-y", y);
      settings.set_int ("window-width", width);
      settings.set_int ("window-height", height);
      return false;
    }
}