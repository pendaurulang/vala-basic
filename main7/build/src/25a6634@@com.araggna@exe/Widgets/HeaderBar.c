/* HeaderBar.c generated by valac 0.40.17, the Vala compiler
 * generated from HeaderBar.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define ARAGGNA_TYPE_HEADER_BAR (araggna_header_bar_get_type ())
#define ARAGGNA_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ARAGGNA_TYPE_HEADER_BAR, araggnaHeaderBar))
#define ARAGGNA_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ARAGGNA_TYPE_HEADER_BAR, araggnaHeaderBarClass))
#define ARAGGNA_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ARAGGNA_TYPE_HEADER_BAR))
#define ARAGGNA_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ARAGGNA_TYPE_HEADER_BAR))
#define ARAGGNA_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ARAGGNA_TYPE_HEADER_BAR, araggnaHeaderBarClass))

typedef struct _araggnaHeaderBar araggnaHeaderBar;
typedef struct _araggnaHeaderBarClass araggnaHeaderBarClass;
typedef struct _araggnaHeaderBarPrivate araggnaHeaderBarPrivate;
enum  {
	ARAGGNA_HEADER_BAR_0_PROPERTY,
	ARAGGNA_HEADER_BAR_NUM_PROPERTIES
};
static GParamSpec* araggna_header_bar_properties[ARAGGNA_HEADER_BAR_NUM_PROPERTIES];

struct _araggnaHeaderBar {
	GtkHeaderBar parent_instance;
	araggnaHeaderBarPrivate * priv;
};

struct _araggnaHeaderBarClass {
	GtkHeaderBarClass parent_class;
};


static gpointer araggna_header_bar_parent_class = NULL;

GType araggna_header_bar_get_type (void) G_GNUC_CONST;
araggnaHeaderBar* araggna_header_bar_new (void);
araggnaHeaderBar* araggna_header_bar_construct (GType object_type);
static GObject * araggna_header_bar_constructor (GType type,
                                          guint n_construct_properties,
                                          GObjectConstructParam * construct_properties);


araggnaHeaderBar*
araggna_header_bar_construct (GType object_type)
{
	araggnaHeaderBar * self = NULL;
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	self = (araggnaHeaderBar*) g_object_new (object_type, NULL);
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	return self;
#line 56 "HeaderBar.c"
}


araggnaHeaderBar*
araggna_header_bar_new (void)
{
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	return araggna_header_bar_construct (ARAGGNA_TYPE_HEADER_BAR);
#line 65 "HeaderBar.c"
}


static GObject *
araggna_header_bar_constructor (GType type,
                                guint n_construct_properties,
                                GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	araggnaHeaderBar * self;
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	parent_class = G_OBJECT_CLASS (araggna_header_bar_parent_class);
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ARAGGNA_TYPE_HEADER_BAR, araggnaHeaderBar);
#line 3 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	gtk_header_bar_set_title ((GtkHeaderBar*) self, "araggna");
#line 4 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	gtk_header_bar_set_subtitle ((GtkHeaderBar*) self, "re_araggna");
#line 6 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	gtk_header_bar_set_show_close_button ((GtkHeaderBar*) self, TRUE);
#line 2 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	return obj;
#line 91 "HeaderBar.c"
}


static void
araggna_header_bar_class_init (araggnaHeaderBarClass * klass)
{
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	araggna_header_bar_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/re/Programs/project/study/vala/vala-basic/main7/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->constructor = araggna_header_bar_constructor;
#line 102 "HeaderBar.c"
}


static void
araggna_header_bar_instance_init (araggnaHeaderBar * self)
{
}


GType
araggna_header_bar_get_type (void)
{
	static volatile gsize araggna_header_bar_type_id__volatile = 0;
	if (g_once_init_enter (&araggna_header_bar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (araggnaHeaderBarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) araggna_header_bar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (araggnaHeaderBar), 0, (GInstanceInitFunc) araggna_header_bar_instance_init, NULL };
		GType araggna_header_bar_type_id;
		araggna_header_bar_type_id = g_type_register_static (gtk_header_bar_get_type (), "araggnaHeaderBar", &g_define_type_info, 0);
		g_once_init_leave (&araggna_header_bar_type_id__volatile, araggna_header_bar_type_id);
	}
	return araggna_header_bar_type_id__volatile;
}



