/* Window.c generated by valac 0.40.17, the Vala compiler
 * generated from Window.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <gdk/gdk.h>


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
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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
	GSettings* settings;
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
gboolean araggna_window_before_destroy (araggnaWindow* self);
static GObject * araggna_window_constructor (GType type,
                                      guint n_construct_properties,
                                      GObjectConstructParam * construct_properties);
static gboolean _araggna_window___lambda4_ (araggnaWindow* self,
                                     GdkEventAny* e);
static gboolean __araggna_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                              GdkEventAny* event,
                                                              gpointer self);
static void araggna_window_finalize (GObject * obj);


araggnaWindow*
araggna_window_construct (GType object_type,
                          Application* app)
{
	araggnaWindow * self = NULL;
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 5 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	self = (araggnaWindow*) g_object_new (object_type, "application", app, NULL);
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	return self;
#line 82 "Window.c"
}


araggnaWindow*
araggna_window_new (Application* app)
{
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	return araggna_window_construct (ARAGGNA_TYPE_WINDOW, app);
#line 91 "Window.c"
}


gboolean
araggna_window_before_destroy (araggnaWindow* self)
{
	gboolean result = FALSE;
	gint width = 0;
	gint height = 0;
	gint x = 0;
	gint y = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	GSettings* _tmp4_;
	GSettings* _tmp5_;
	GSettings* _tmp6_;
	GSettings* _tmp7_;
#line 25 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 28 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	gtk_window_get_size ((GtkWindow*) self, &_tmp0_, &_tmp1_);
#line 28 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	width = _tmp0_;
#line 28 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	height = _tmp1_;
#line 29 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	gtk_window_get_position ((GtkWindow*) self, &_tmp2_, &_tmp3_);
#line 29 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	x = _tmp2_;
#line 29 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	y = _tmp3_;
#line 31 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_tmp4_ = self->settings;
#line 31 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	g_settings_set_int (_tmp4_, "pos-x", x);
#line 32 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_tmp5_ = self->settings;
#line 32 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	g_settings_set_int (_tmp5_, "pos-y", y);
#line 33 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_tmp6_ = self->settings;
#line 33 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	g_settings_set_int (_tmp6_, "window-width", width);
#line 34 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_tmp7_ = self->settings;
#line 34 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	g_settings_set_int (_tmp7_, "window-height", height);
#line 35 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	result = FALSE;
#line 35 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	return result;
#line 145 "Window.c"
}


static gboolean
_araggna_window___lambda4_ (araggnaWindow* self,
                            GdkEventAny* e)
{
	gboolean result = FALSE;
#line 19 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 20 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	result = araggna_window_before_destroy (self);
#line 20 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	return result;
#line 160 "Window.c"
}


static gboolean
__araggna_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                     GdkEventAny* event,
                                                     gpointer self)
{
	gboolean result;
	result = _araggna_window___lambda4_ ((araggnaWindow*) self, event);
#line 19 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	return result;
#line 173 "Window.c"
}


static GObject *
araggna_window_constructor (GType type,
                            guint n_construct_properties,
                            GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	araggnaWindow * self;
	GSettings* _tmp0_;
	GSettings* _tmp1_;
	GSettings* _tmp2_;
	GSettings* _tmp3_;
	GSettings* _tmp4_;
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	parent_class = G_OBJECT_CLASS (araggna_window_parent_class);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ARAGGNA_TYPE_WINDOW, araggnaWindow);
#line 11 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	gtk_window_set_title ((GtkWindow*) self, "just re");
#line 12 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
#line 13 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 350, 88);
#line 15 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_tmp0_ = g_settings_new ("com.app.araggna");
#line 15 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_g_object_unref0 (self->settings);
#line 15 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	self->settings = _tmp0_;
#line 16 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_tmp1_ = self->settings;
#line 16 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_tmp2_ = self->settings;
#line 16 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	gtk_window_move ((GtkWindow*) self, g_settings_get_int (_tmp1_, "pos-x"), g_settings_get_int (_tmp2_, "pos-y"));
#line 17 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_tmp3_ = self->settings;
#line 17 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_tmp4_ = self->settings;
#line 17 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	gtk_window_resize ((GtkWindow*) self, g_settings_get_int (_tmp3_, "window-width"), g_settings_get_int (_tmp4_, "window-height"));
#line 19 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	g_signal_connect_object ((GtkWidget*) self, "delete-event", (GCallback) __araggna_window___lambda4__gtk_widget_delete_event, self, 0);
#line 23 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	return obj;
#line 226 "Window.c"
}


static void
araggna_window_class_init (araggnaWindowClass * klass)
{
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	araggna_window_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->constructor = araggna_window_constructor;
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->finalize = araggna_window_finalize;
#line 239 "Window.c"
}


static void
araggna_window_instance_init (araggnaWindow * self)
{
}


static void
araggna_window_finalize (GObject * obj)
{
	araggnaWindow * self;
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ARAGGNA_TYPE_WINDOW, araggnaWindow);
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	_g_object_unref0 (self->settings);
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main6/src/Widgets/Window.vala"
	G_OBJECT_CLASS (araggna_window_parent_class)->finalize (obj);
#line 259 "Window.c"
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



