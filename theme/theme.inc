<?php

/**
 * @file
 * theme/theme.inc
 *
 *
 *  Copyright 2018 Leiden University Library
 *
 *  This file is part of islandora_paged_content_navigator.
 *
 *  islandora_paged_content_navigator is free software: you can redistribute it
 *  and/or modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation, either version 3 of the License,
 *  or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Implements hook_process_islandora_solr_search_navigation_block().
 */
function template_process_islandora_paged_content_navigation_block(&$variables) {
  if ($variables['prev_link']) {
    $variables['prev_link'] = format_string('<a href="@link">@text</a>', array(
      '@link' => $variables['prev_link'],
      '@text' => $variables['prev_text'],
    ));
  }
  $variables['return_link'] = format_string('<a href="@link">@text</a>', array(
    '@link' => $variables['return_link'],
    '@text' => $variables['return_text'],
  ));
  if ($variables['next_link']) {
    $variables['next_link'] = format_string('<a href="@link">@text</a>', array(
      '@link' => $variables['next_link'],
      '@text' => $variables['next_text'],
    ));
  }
}

