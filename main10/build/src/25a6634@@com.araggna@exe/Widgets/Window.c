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

#define ARAGGNA_TYPE_HEADER_BAR (araggna_header_bar_get_type ())
#define ARAGGNA_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ARAGGNA_TYPE_HEADER_BAR, araggnaHeaderBar))
#define ARAGGNA_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ARAGGNA_TYPE_HEADER_BAR, araggnaHeaderBarClass))
#define ARAGGNA_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ARAGGNA_TYPE_HEADER_BAR))
#define ARAGGNA_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ARAGGNA_TYPE_HEADER_BAR))
#define ARAGGNA_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ARAGGNA_TYPE_HEADER_BAR, araggnaHeaderBarClass))

typedef struct _araggnaHeaderBar araggnaHeaderBar;
typedef struct _araggnaHeaderBarClass araggnaHeaderBarClass;

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
GType araggna_header_bar_get_type (void) G_GNUC_CONST;
araggnaHeaderBar* araggna_header_bar_new (GtkStack* stack);
araggnaHeaderBar* araggna_header_bar_construct (GType object_type,
                                                GtkStack* stack);
static void araggna_window_finalize (GObject * obj);


araggnaWindow*
araggna_window_construct (GType object_type,
                          Application* app)
{
	araggnaWindow * self = NULL;
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 5 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	self = (araggnaWindow*) g_object_new (object_type, "application", app, NULL);
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	return self;
#line 96 "Window.c"
}


araggnaWindow*
araggna_window_new (Application* app)
{
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	return araggna_window_construct (ARAGGNA_TYPE_WINDOW, app);
#line 105 "Window.c"
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
#line 42 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 45 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_window_get_size ((GtkWindow*) self, &_tmp0_, &_tmp1_);
#line 45 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	width = _tmp0_;
#line 45 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	height = _tmp1_;
#line 46 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_window_get_position ((GtkWindow*) self, &_tmp2_, &_tmp3_);
#line 46 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	x = _tmp2_;
#line 46 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	y = _tmp3_;
#line 48 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp4_ = self->settings;
#line 48 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_settings_set_int (_tmp4_, "pos-x", x);
#line 49 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp5_ = self->settings;
#line 49 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_settings_set_int (_tmp5_, "pos-y", y);
#line 50 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp6_ = self->settings;
#line 50 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_settings_set_int (_tmp6_, "window-width", width);
#line 51 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp7_ = self->settings;
#line 51 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_settings_set_int (_tmp7_, "window-height", height);
#line 52 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	result = FALSE;
#line 52 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	return result;
#line 159 "Window.c"
}


static gboolean
_araggna_window___lambda4_ (araggnaWindow* self,
                            GdkEventAny* e)
{
	gboolean result = FALSE;
#line 19 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 20 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	result = araggna_window_before_destroy (self);
#line 20 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	return result;
#line 174 "Window.c"
}


static gboolean
__araggna_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                     GdkEventAny* event,
                                                     gpointer self)
{
	gboolean result;
	result = _araggna_window___lambda4_ ((araggnaWindow*) self, event);
#line 19 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	return result;
#line 187 "Window.c"
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
	GtkStack* stack = NULL;
	GtkStack* _tmp5_;
	GtkStack* _tmp6_;
	GtkGrid* kakuja = NULL;
	GtkGrid* _tmp7_;
	GtkGrid* _tmp8_;
	GtkLabel* _tmp9_;
	GtkLabel* _tmp10_;
	GtkGrid* quinque = NULL;
	GtkGrid* _tmp11_;
	GtkGrid* _tmp12_;
	GtkLabel* _tmp13_;
	GtkLabel* _tmp14_;
	GtkStack* _tmp15_;
	GtkGrid* _tmp16_;
	GtkStack* _tmp17_;
	GtkGrid* _tmp18_;
	GtkStack* _tmp19_;
	araggnaHeaderBar* headerbar = NULL;
	GtkStack* _tmp20_;
	araggnaHeaderBar* _tmp21_;
	araggnaHeaderBar* _tmp22_;
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	parent_class = G_OBJECT_CLASS (araggna_window_parent_class);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ARAGGNA_TYPE_WINDOW, araggnaWindow);
#line 12 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
#line 13 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 350, 88);
#line 15 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp0_ = g_settings_new ("com.app.araggna");
#line 15 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_g_object_unref0 (self->settings);
#line 15 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	self->settings = _tmp0_;
#line 16 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp1_ = self->settings;
#line 16 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp2_ = self->settings;
#line 16 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_window_move ((GtkWindow*) self, g_settings_get_int (_tmp1_, "pos-x"), g_settings_get_int (_tmp2_, "pos-y"));
#line 17 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp3_ = self->settings;
#line 17 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp4_ = self->settings;
#line 17 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_window_resize ((GtkWindow*) self, g_settings_get_int (_tmp3_, "window-width"), g_settings_get_int (_tmp4_, "window-height"));
#line 19 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_signal_connect_object ((GtkWidget*) self, "delete-event", (GCallback) __araggna_window___lambda4__gtk_widget_delete_event, self, 0);
#line 23 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp5_ = (GtkStack*) gtk_stack_new ();
#line 23 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_object_ref_sink (_tmp5_);
#line 23 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	stack = _tmp5_;
#line 24 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp6_ = stack;
#line 24 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_object_set ((GtkWidget*) _tmp6_, "expand", TRUE, NULL);
#line 26 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp7_ = (GtkGrid*) gtk_grid_new ();
#line 26 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_object_ref_sink (_tmp7_);
#line 26 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	kakuja = _tmp7_;
#line 27 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp8_ = kakuja;
#line 27 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp9_ = (GtkLabel*) gtk_label_new ("Kakuja here");
#line 27 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_object_ref_sink (_tmp9_);
#line 27 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp10_ = _tmp9_;
#line 27 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_container_add ((GtkContainer*) _tmp8_, (GtkWidget*) _tmp10_);
#line 27 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_g_object_unref0 (_tmp10_);
#line 28 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp11_ = (GtkGrid*) gtk_grid_new ();
#line 28 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_object_ref_sink (_tmp11_);
#line 28 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	quinque = _tmp11_;
#line 29 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp12_ = quinque;
#line 29 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp13_ = (GtkLabel*) gtk_label_new ("Quinque");
#line 29 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_object_ref_sink (_tmp13_);
#line 29 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp14_ = _tmp13_;
#line 29 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_container_add ((GtkContainer*) _tmp12_, (GtkWidget*) _tmp14_);
#line 29 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_g_object_unref0 (_tmp14_);
#line 31 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp15_ = stack;
#line 31 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp16_ = kakuja;
#line 31 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_stack_add_titled (_tmp15_, (GtkWidget*) _tmp16_, "kakuja", "Kakuja");
#line 32 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp17_ = stack;
#line 32 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp18_ = quinque;
#line 32 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_stack_add_titled (_tmp17_, (GtkWidget*) _tmp18_, "quinque", "Quinque");
#line 34 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp19_ = stack;
#line 34 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp19_);
#line 37 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp20_ = stack;
#line 37 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp21_ = araggna_header_bar_new (_tmp20_);
#line 37 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	g_object_ref_sink (_tmp21_);
#line 37 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	headerbar = _tmp21_;
#line 38 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_tmp22_ = headerbar;
#line 38 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_window_set_titlebar ((GtkWindow*) self, (GtkWidget*) _tmp22_);
#line 40 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_g_object_unref0 (headerbar);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_g_object_unref0 (quinque);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_g_object_unref0 (kakuja);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_g_object_unref0 (stack);
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	return obj;
#line 342 "Window.c"
}


static void
araggna_window_class_init (araggnaWindowClass * klass)
{
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	araggna_window_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->constructor = araggna_window_constructor;
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->finalize = araggna_window_finalize;
#line 355 "Window.c"
}


static void
araggna_window_instance_init (araggnaWindow * self)
{
}


static void
araggna_window_finalize (GObject * obj)
{
	araggnaWindow * self;
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ARAGGNA_TYPE_WINDOW, araggnaWindow);
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	_g_object_unref0 (self->settings);
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main10/src/Widgets/Window.vala"
	G_OBJECT_CLASS (araggna_window_parent_class)->finalize (obj);
#line 375 "Window.c"
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


