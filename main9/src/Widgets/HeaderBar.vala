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
        

        var menu_button = new Gtk.Button.from_icon_name ("emblem-system", Gtk.IconSize.LARGE_TOOLBAR);
        menu_button.valign = Gtk.Align.CENTER;

        var stack_switcher = new Gtk.StackSwitcher ();
        var stack = new Gtk.Stack();
        stack_switcher.stack = stack;

        var kakuja = new Gtk.Grid ();
        kakuja.add (new Gtk.Label ("Kakuja here"));
        var quinque = new Gtk.Grid ();
        quinque.add (new Gtk.Label ("Quinque"));

        stack.add_titled (kakuja, "kakuja", "Kakuja");
        stack.add_titled (quinque, "quinque", "Quinque");

        set_custom_title (stack_switcher);

        pack_end(menu_button);
        pack_end(add1_button);
    }
}