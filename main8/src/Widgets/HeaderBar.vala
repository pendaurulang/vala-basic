public class araggna.HeaderBar : Gtk.HeaderBar {
    construct {
        title = "araggna";
        subtitle = "re_araggna";

        show_close_button = true;

        var add_button = new Gtk.Button.with_label ("add");
        add_button.get_style_context ().add_class ("suggested-action");
        add_button.valign = Gtk.Align.CENTER;

        var add1_button = new Gtk.Button.with_label ("add");
        add1_button.get_style_context ().add_class ("suggested-action");
        add1_button.valign = Gtk.Align.CENTER;

        pack_start(add_button);
        

        var menu_button = new Gtk.Button.from_icon_name ("open-menu", Gtk.IconSize.LARGE_TOOLBAR);
        
        pack_end(menu_button);
        pack_end(add1_button);
    }
}