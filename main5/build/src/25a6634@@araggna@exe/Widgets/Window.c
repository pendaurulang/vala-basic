/* Window.c generated by valac 0.40.17, the Vala compiler
 * generated from Window.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define ARAGGNA_TYPE_WINDOW (araggna_window_get_type ())
#define ARAGGNA_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ARAGGNA_TYPE_WINDOW, araggnaWindow))
#define ARAGGNA_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ARAGGNA_TYPE_WINDOW, araggnaWindowClass))
#define ARAGGNA_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ARAGGNA_TYPE_WINDOW))
#define ARAGGNA_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ARAGGNA_TYPE_WINDOW))
#define ARAGGNA_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ARAGGNA_TYPE_WINDOW, araggnaWindowClass))

typedef struct _araggnaWindow araggnaWindow;
typedef struct _araggnaWindowClass araggnaWindowClass;
typedef struct _araggnaWindowPrivate araggnaWindowPrivate;
enum  {
	ARAGGNA_WINDOW_0_PROPERTY,
	ARAGGNA_WINDOW_NUM_PROPERTIES
};
static GParamSpec* araggna_window_properties[ARAGGNA_WINDOW_NUM_PROPERTIES];

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;

struct _araggnaWindow {
	GtkApplicationWindow parent_instance;
	araggnaWindowPrivate * priv;
};

struct _araggnaWindowClass {
	GtkApplicationWindowClass parent_class;
};


static gpointer araggna_window_parent_class = NULL;

GType araggna_window_get_type (void) G_GNUC_CONST;
GType application_get_type (void) G_GNUC_CONST;
araggnaWindow* araggna_window_new (Application* app);
araggnaWindow* araggna_window_construct (GType object_type,
                                         Application* app);
static GObject * araggna_window_constructor (GType type,
                                      guint n_construct_properties,
                                      GObjectConstructParam * construct_properties);


araggnaWindow*
araggna_window_construct (GType object_type,
                          Application* app)
{
	araggnaWindow * self = NULL;
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 3 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	self = (araggnaWindow*) g_object_new (object_type, "application", app, NULL);
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	return self;
#line 71 "Window.c"
}


araggnaWindow*
araggna_window_new (Application* app)
{
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	return araggna_window_construct (ARAGGNA_TYPE_WINDOW, app);
#line 80 "Window.c"
}


static GObject *
araggna_window_constructor (GType type,
                            guint n_construct_properties,
                            GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	araggnaWindow * self;
#line 8 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	parent_class = G_OBJECT_CLASS (araggna_window_parent_class);
#line 8 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 8 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ARAGGNA_TYPE_WINDOW, araggnaWindow);
#line 9 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	gtk_window_set_title ((GtkWindow*) self, "just re");
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
#line 11 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 350, 88);
#line 13 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 8 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	return obj;
#line 108 "Window.c"
}


static void
araggna_window_class_init (araggnaWindowClass * klass)
{
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	araggna_window_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main5/src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->constructor = araggna_window_constructor;
#line 119 "Window.c"
}


static void
araggna_window_instance_init (araggnaWindow * self)
{
}


GType
araggna_window_get_type (void)
{
	static volatile gsize araggna_window_type_id__volatile = 0;
	if (g_once_init_enter (&araggna_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (araggnaWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) araggna_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (araggnaWindow), 0, (GInstanceInitFunc) araggna_window_instance_init, NULL };
		GType araggna_window_type_id;
		araggna_window_type_id = g_type_register_static (gtk_application_window_get_type (), "araggnaWindow", &g_define_type_info, 0);
		g_once_init_leave (&araggna_window_type_id__volatile, araggna_window_type_id);
	}
	return araggna_window_type_id__volatile;
}


