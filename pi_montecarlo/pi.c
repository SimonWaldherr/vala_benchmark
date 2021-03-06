/* pi.c generated by valac 0.39.92, the Vala compiler
 * generated from pi.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>
#include <stdio.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))



void _vala_main (void);


void
_vala_main (void)
{
	GDateTime* start = NULL;
	GDateTime* _tmp0_;
	guint i = 0U;
	guint o = 0U;
	FILE* _tmp9_;
	guint _tmp10_;
	guint _tmp11_;
	FILE* _tmp12_;
	GDateTime* _tmp13_;
	GDateTime* _tmp14_;
	GDateTime* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	_tmp0_ = g_date_time_new_now_local ();
	start = _tmp0_;
	i = (guint) 0;
	o = (guint) 0;
	{
		gint n = 0;
		n = 0;
		{
			gboolean _tmp1_ = FALSE;
			_tmp1_ = TRUE;
			while (TRUE) {
				gint _tmp3_;
				gdouble x = 0.0;
				gdouble y = 0.0;
				gdouble d = 0.0;
				gdouble _tmp4_;
				gdouble _tmp5_;
				gdouble _tmp6_;
				if (!_tmp1_) {
					gint _tmp2_;
					_tmp2_ = n;
					n = _tmp2_ + 1;
				}
				_tmp1_ = FALSE;
				_tmp3_ = n;
				if (!(_tmp3_ < 1000000)) {
					break;
				}
				x = g_random_double ();
				y = g_random_double ();
				_tmp4_ = x;
				_tmp5_ = y;
				d = sqrt (pow (_tmp4_, (gdouble) 2) + pow (_tmp5_, (gdouble) 2));
				_tmp6_ = d;
				if (_tmp6_ > 1.0) {
					guint _tmp7_;
					_tmp7_ = o;
					o = _tmp7_ + 1;
				} else {
					guint _tmp8_;
					_tmp8_ = i;
					i = _tmp8_ + 1;
				}
			}
		}
	}
	_tmp9_ = stdout;
	_tmp10_ = i;
	_tmp11_ = o;
	fprintf (_tmp9_, "PI is: %f\n", ((gdouble) _tmp10_) / ((gdouble) _tmp11_));
	_tmp12_ = stdout;
	_tmp13_ = g_date_time_new_now_local ();
	_tmp14_ = _tmp13_;
	_tmp15_ = start;
	_tmp16_ = g_strdup_printf ("%" G_GINT64_FORMAT, (gint64) g_date_time_difference (_tmp14_, _tmp15_));
	_tmp17_ = _tmp16_;
	fprintf (_tmp12_, "ended after: %s\n", _tmp17_);
	_g_free0 (_tmp17_);
	_g_date_time_unref0 (_tmp14_);
	_g_date_time_unref0 (start);
}


int
main (int argc,
      char ** argv)
{
	_vala_main ();
	return 0;
}



