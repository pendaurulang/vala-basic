public class araggna.HeaderBar : Gtk.HeaderBar {
    public araggna.Window main_window { get; construct; }

    public HeaderBar (araggna.Window window) {
        Object(
            main_window: window
            );
    }
    construct {
        show_close_button = true;

        var add_button = new Gtk.Button.with_label ("add");
        add_button.get_style_context ().add_class ("suggested-action");
        add_button.valign = Gtk.Align.CENTER;

        add_button.clicked.connect (open_dialog);
        
        
        var add1_button = new Gtk.Button.with_label ("add");
        add1_button.get_style_context ().add_class ("suggested-action");
        add1_button.valign = Gtk.Align.CENTER;

        pack_start(add_button);
        

        var menu_button = new Gtk.Button.from_icon_name ("emblem-system", Gtk.IconSize.LARGE_TOOLBAR);
        menu_button.valign = Gtk.Align.CENTER;

        var stack_switcher = new Gtk.StackSwitcher ();
        
        stack_switcher.stack = main_window.stack;

        
        set_custom_title (stack_switcher);

        pack_end(menu_button);
        pack_end(add1_button);
    }

    public void open_dialog () {
        var dialog = new Gtk.Dialog.with_buttons (
            "Add words",
            main_window,
            Gtk.DialogFlags.MODAL |
            Gtk.DialogFlags.DESTROY_WITH_PARENT,
            "ichi",1,
            "ni",2,null
        );

        var label = new Gtk.Label ("select your role");
        var content_area = dialog.get_content_area ();
        content_area.add (label);

        dialog.show_all ();
        dialog.present ();

    }
}