/*
 * ideviceinfo-property-page.h
 * 
 * Copyright (C) 2010 Nikias Bassen <nikias@gmx.li>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more profile.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 
 * USA
 */

#include <glib-object.h>
#include <gtk/gtk.h>

#ifndef IDEVICEINFO_PROPERTY_PAGE_H
#define IDEVICEINFO_PROPERTY_PAGE_H

G_BEGIN_DECLS

#define NEMO_TYPE_IDEVICEINFO_PAGE (nemo_ideviceinfo_page_get_type())

typedef struct NemoIdeviceinfoPage NemoIdeviceinfoPage;
typedef struct NemoIdeviceinfoPageClass NemoIdeviceinfoPageClass;
typedef struct NemoIdeviceinfoPagePrivate NemoIdeviceinfoPagePrivate;

struct NemoIdeviceinfoPage {
	GtkBox parent;
	NemoIdeviceinfoPagePrivate *priv;
};

struct NemoIdeviceinfoPageClass {
	GtkBoxClass parent_class;
};

GType nemo_ideviceinfo_page_get_type(void);
GtkWidget *nemo_ideviceinfo_page_new(const char *uuid, const char *mount_path);

G_END_DECLS

#endif /* IDEVICEINFO_PROPERTY_PAGE_H */
