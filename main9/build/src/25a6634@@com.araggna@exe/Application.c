/* Application.c generated by valac 0.40.17, the Vala compiler
 * generated from Application.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>


#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;
typedef struct _ApplicationPrivate ApplicationPrivate;
enum  {
	APPLICATION_0_PROPERTY,
	APPLICATION_NUM_PROPERTIES
};
static GParamSpec* application_properties[APPLICATION_NUM_PROPERTIES];

#define ARAGGNA_TYPE_WINDOW (araggna_window_get_type ())
#define ARAGGNA_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ARAGGNA_TYPE_WINDOW, araggnaWindow))
#define ARAGGNA_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ARAGGNA_TYPE_WINDOW, araggnaWindowClass))
#define ARAGGNA_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ARAGGNA_TYPE_WINDOW))
#define ARAGGNA_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ARAGGNA_TYPE_WINDOW))
#define ARAGGNA_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ARAGGNA_TYPE_WINDOW, araggnaWindowClass))

typedef struct _araggnaWindow araggnaWindow;
typedef struct _araggnaWindowClass araggnaWindowClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _Application {
	GtkApplication parent_instance;
	ApplicationPrivate * priv;
};

struct _ApplicationClass {
	GtkApplicationClass parent_class;
};


static gpointer application_parent_class = NULL;

GType application_get_type (void) G_GNUC_CONST;
Application* application_new (void);
Application* application_construct (GType object_type);
static void application_real_activate (GApplication* base);
GType araggna_window_get_type (void) G_GNUC_CONST;
araggnaWindow* araggna_window_new (Application* app);
araggnaWindow* araggna_window_construct (GType object_type,
                                         Application* app);


Application*
application_construct (GType object_type)
{
	Application * self = NULL;
#line 3 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	self = (Application*) g_object_new (object_type, "application-id", "com.app.araggna", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	return self;
#line 70 "Application.c"
}


Application*
application_new (void)
{
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	return application_construct (TYPE_APPLICATION);
#line 79 "Application.c"
}


static void
application_real_activate (GApplication* base)
{
	Application * self;
	araggnaWindow* window = NULL;
	araggnaWindow* _tmp0_;
#line 8 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	self = (Application*) base;
#line 9 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	_tmp0_ = araggna_window_new (self);
#line 9 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	g_object_ref_sink (_tmp0_);
#line 9 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	window = _tmp0_;
#line 10 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	gtk_application_add_window ((GtkApplication*) self, (GtkWindow*) window);
#line 8 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	_g_object_unref0 (window);
#line 101 "Application.c"
}


static void
application_class_init (ApplicationClass * klass)
{
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	application_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main9/src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) application_real_activate;
#line 112 "Application.c"
}


static void
application_instance_init (Application * self)
{
}


GType
application_get_type (void)
{
	static volatile gsize application_type_id__volatile = 0;
	if (g_once_init_enter (&application_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ApplicationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) application_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Application), 0, (GInstanceInitFunc) application_instance_init, NULL };
		GType application_type_id;
		application_type_id = g_type_register_static (gtk_application_get_type (), "Application", &g_define_type_info, 0);
		g_once_init_leave (&application_type_id__volatile, application_type_id);
	}
	return application_type_id__volatile;
}



