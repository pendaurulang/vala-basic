/* main6.c generated by valac 0.40.17, the Vala compiler
 * generated from main6.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
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
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))



gint _vala_main (gchar** args,
                 int args_length1);
GType application_get_type (void) G_GNUC_CONST;
Application* application_new (void);
Application* application_construct (GType object_type);


gint
_vala_main (gchar** args,
            int args_length1)
{
	gint result = 0;
	Application* app = NULL;
	Application* _tmp0_;
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main6/src/main6.vala"
	_tmp0_ = application_new ();
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main6/src/main6.vala"
	app = _tmp0_;
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main6/src/main6.vala"
	result = g_application_run ((GApplication*) app, args_length1, args);
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main6/src/main6.vala"
	_g_object_unref0 (app);
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main6/src/main6.vala"
	return result;
#line 52 "main6.c"
}


int
main (int argc,
      char ** argv)
{
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main6/src/main6.vala"
	return _vala_main (argv, argc);
#line 62 "main6.c"
}



