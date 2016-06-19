/*
 * Copyright (C) 2016 Neil Herald <neil.herald@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>

#include "nautilus-toolbar-menu-sections.h"


NautilusToolbarMenuSections *
nautilus_toolbar_menu_sections_new (void)
{
        NautilusToolbarMenuSections *sections;

        sections = g_new0 (NautilusToolbarMenuSections, 1);

        return sections;
}

void
nautilus_toolbar_menu_sections_destroy (NautilusToolbarMenuSections *sections)
{
        g_free (sections);
}
