public class araggna.HeaderBar : Gtk.HeaderBar {
    public Gtk.Stack window_stack { get; construct; }

    public HeaderBar (Gtk.Stack stack){
        Object(window_stack: stack);
    }
    construct {
        show_close_button = true;

        var add_button = new Gtk.Button.with_label ("add");
        add_button.get_style_context ().add_class ("suggested-action");
        add_button.valign = Gtk.Align.CENTER;

        var add1_button = new Gtk.Button.with_label ("add");
        add1_button.get_style_context ().add_class ("suggested-action");
        add1_button.valign = Gtk.Align.CENTER;

        pack_start(add_button);
        

        var menu_button = new Gtk.Button.from_icon_name ("emblem-system", Gtk.IconSize.LARGE_TOOLBAR);
        menu_button.valign = Gtk.Align.CENTER;

        var stack_switcher = new Gtk.StackSwitcher ();
        
        stack_switcher.stack = window_stack;

        
        set_custom_title (stack_switcher);

        pack_end(menu_button);
        pack_end(add1_button);
    }
}