api = 2
core = 7.x

; Download projects specific for the Linux.com installation profile.
; Contributed modules.
projects[advanced_forum][type] = "module"
projects[advanced_forum][subdir] = "contrib"
projects[advanced_forum][version] = "2.3"
projects[charts][type] = "module"
projects[charts][subdir] = "contrib"
projects[charts][version] = "2.0-beta5"
projects[compact_forms][type] = "module"
projects[compact_forms][subdir] = "contrib"
projects[compact_forms][version] = "1.0"
projects[entity_translation][type] = "module"
projects[entity_translation][subdir] = "contrib"
projects[entity_translation][version] = "1.0-beta3"
projects[features_translations][type] = "module"
projects[features_translations][subdir] = "contrib"
projects[features_translations][version] = "1.0-beta2"
projects[flickr][type] = "module"
projects[flickr][subdir] = "contrib"
projects[flickr][version] = "1.1"
projects[flippy][type] = "module"
projects[flippy][subdir] = "contrib"
projects[flippy][version] = "1.2"
projects[google_analytics_reports][type] = "module"
projects[google_analytics_reports][subdir] = "contrib"
projects[google_analytics_reports][version] = "3.x-dev"
projects[i18n][type] = "module"
projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.10"
projects[i18nviews][type] = "module"
projects[i18nviews][subdir] = "contrib"
projects[i18nviews][version] = "3.x-dev"
projects[i18nviews][patch][] = "https://raw2.github.com/imagex/imagex_patches/7.x/contrib/i18nviews/i18nviews-1653170.patch"
projects[luxe][type] = "module"
projects[luxe][subdir] = "contrib"
projects[luxe][version] = "1.2"
projects[pardot][type] = "module"
projects[pardot][subdir] = "contrib"
projects[pardot][version] = "1.0"
projects[oauth][type] = "module"
projects[oauth][subdir] = "contrib"
projects[oauth][version] = "3.1"
projects[og_role_field][type] = "module"
projects[og_role_field][subdir] = "contrib"
projects[og_role_field][version] = "1.0"
projects[og][type] = "module"
projects[og][subdir] = "contrib"
projects[og][version] = "2.3"
projects[migrate][type] = "module"
projects[migrate][subdir] = "contrib"
projects[migrate][version] = "2.x-dev"
projects[migrate_extras][type] = "module"
projects[migrate_extras][subdir] = "contrib"
projects[migrate_extras][version] = "2.5"
projects[rate][type] = "module"
projects[rate][subdir] = "contrib"
projects[rate][version] = "1.6"
projects[votingapi][type] = "module"
projects[votingapi][subdir] = "contrib"
projects[votingapi][version] = "2.11"
projects[views_slideshow][type] = "module"
projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.1"
projects[search_api_solr][type] = "module"
projects[search_api_solr][subdir] = "contrib"
projects[search_api_solr][version] = "1.3"
projects[xbbcode][type] = "module"
projects[xbbcode][subdir] = "contrib"
projects[xbbcode][version] = "1.5"
projects[user_badges][type] = "module"
projects[user_badges][subdir] = "contrib"
projects[user_badges][version] = "3.x-dev"
projects[userpoints][type] = "module"
projects[userpoints][subdir] = "contrib"
projects[userpoints][version] = "1.0"
projects[variable][type] = "module"
projects[variable][subdir] = "contrib"
projects[variable][version] = "2.3"
projects[voting_rules][type] = "module"
projects[voting_rules][subdir] = "contrib"
projects[voting_rules][version] = "1.0-alpha1"

; Download ImageX components for this project.
projects[imagex_activity][type] = "module"
projects[imagex_activity][subdir] = "imagex/modules"
projects[imagex_activity][download][type] = "git"
projects[imagex_activity][download][url] = "git@github.com:imagex/imagex_activity.git"
projects[imagex_activity][download][tag] = "7.x-1.0"

projects[imagex_aggregator][type] = "module"
projects[imagex_aggregator][subdir] = "imagex/modules"
projects[imagex_aggregator][download][type] = "git"
projects[imagex_aggregator][download][url] = "git@github.com:imagex/imagex_aggregator.git"
; Download the latest source code for this project.
projects[imagex_aggregator][download][branch] = "7.x-1.x"

projects[imagex_answers][type] = "module"
projects[imagex_answers][subdir] = "imagex/modules"
projects[imagex_answers][download][type] = "git"
projects[imagex_answers][download][url] = "git@github.com:imagex/imagex_answers.git"
projects[imagex_answers][download][tag] = "7.x-1.0.1"

projects[imagex_blog][type] = "module"
projects[imagex_blog][subdir] = "imagex/modules"
projects[imagex_blog][download][type] = "git"
projects[imagex_blog][download][url] = "git@github.com:imagex/imagex_blog.git"
projects[imagex_blog][download][tag] = "7.x-1.0"

projects[imagex_content_featured][type] = "module"
projects[imagex_content_featured][subdir] = "imagex/modules"
projects[imagex_content_featured][download][type] = "git"
projects[imagex_content_featured][download][url] = "git@github.com:imagex/imagex_content_featured.git"
projects[imagex_content_featured][download][tag] = "7.x-1.0"

projects[imagex_content_inappropriate][type] = "module"
projects[imagex_content_inappropriate][subdir] = "imagex/modules"
projects[imagex_content_inappropriate][download][type] = "git"
projects[imagex_content_inappropriate][download][url] = "git@github.com:imagex/imagex_content_inappropriate.git"
projects[imagex_content_inappropriate][download][tag] = "7.x-1.0.1-dev1"

projects[imagex_content_likes][type] = "module"
projects[imagex_content_likes][subdir] = "imagex/modules"
projects[imagex_content_likes][download][type] = "git"
projects[imagex_content_likes][download][url] = "git@github.com:imagex/imagex_content_likes.git"
projects[imagex_content_likes][download][tag] = "7.x-1.0"

projects[imagex_content_pinned][type] = "module"
projects[imagex_content_pinned][subdir] = "imagex/modules"
projects[imagex_content_pinned][download][type] = "git"
projects[imagex_content_pinned][download][url] = "git@github.com:imagex/imagex_content_pinned.git"
projects[imagex_content_pinned][download][tag] = "7.x-1.0"

projects[imagex_contest][type] = "module"
projects[imagex_contest][subdir] = "imagex/modules"
projects[imagex_contest][download][type] = "git"
projects[imagex_contest][download][url] = "git@github.com:imagex/imagex_contest.git"
projects[imagex_contest][download][tag] = "7.x-1.0"

projects[imagex_date][type] = "module"
projects[imagex_date][subdir] = "imagex/modules"
projects[imagex_date][download][type] = "git"
projects[imagex_date][download][url] = "git@github.com:imagex/imagex_date.git"
projects[imagex_date][download][tag] = "7.x-1.0"

projects[imagex_editorial_desk][type] = "module"
projects[imagex_editorial_desk][subdir] = "imagex/modules"
projects[imagex_editorial_desk][download][type] = "git"
projects[imagex_editorial_desk][download][url] = "git@github.com:imagex/imagex_editorial_desk.git"
projects[imagex_editorial_desk][download][tag] = "7.x-1.0"

projects[imagex_events][type] = "module"
projects[imagex_events][subdir] = "imagex/modules"
projects[imagex_events][download][type] = "git"
projects[imagex_events][download][url] = "git@github.com:imagex/imagex_events.git"
projects[imagex_events][download][tag] = "7.x-1.0"

projects[imagex_faq][type] = "module"
projects[imagex_faq][subdir] = "imagex/modules"
projects[imagex_faq][download][type] = "git"
projects[imagex_faq][download][url] = "git@github.com:imagex/imagex_faq.git"
projects[imagex_faq][download][tag] = "7.x-1.0"

projects[imagex_group][type] = "module"
projects[imagex_group][subdir] = "imagex/modules"
projects[imagex_group][download][type] = "git"
projects[imagex_group][download][url] = "git@github.com:imagex/imagex_group.git"
projects[imagex_group][download][tag] = "7.x-1.0"

projects[imagex_landing_page][type] = "module"
projects[imagex_landing_page][subdir] = "imagex/modules"
projects[imagex_landing_page][download][type] = "git"
projects[imagex_landing_page][download][url] = "git@github.com:imagex/imagex_landing_page.git"
projects[imagex_landing_page][download][tag] = "7.x-1.0"

projects[imagex_news][type] = "module"
projects[imagex_news][subdir] = "imagex/modules"
projects[imagex_news][download][type] = "git"
projects[imagex_news][download][url] = "git@github.com:imagex/imagex_news.git"
projects[imagex_news][download][tag] = "7.x-1.0"

projects[imagex_radioactivity][type] = "module"
projects[imagex_radioactivity][subdir] = "imagex/modules"
projects[imagex_radioactivity][download][type] = "git"
projects[imagex_radioactivity][download][url] = "git@github.com:imagex/imagex_radioactivity.git"
projects[imagex_radioactivity][download][tag] = "7.x-1.0"

projects[imagex_rss][type] = "module"
projects[imagex_rss][subdir] = "imagex/modules"
projects[imagex_rss][download][type] = "git"
projects[imagex_rss][download][url] = "git@github.com:imagex/imagex_rss.git"
projects[imagex_rss][download][tag] = "7.x-1.0"

projects[imagex_poll][type] = "module"
projects[imagex_poll][subdir] = "imagex/modules"
projects[imagex_poll][download][type] = "git"
projects[imagex_poll][download][url] = "git@github.com:imagex/imagex_poll.git"
projects[imagex_poll][download][tag] = "7.x-1.0"

projects[imagex_user][type] = "module"
projects[imagex_user][subdir] = "imagex/modules"
projects[imagex_user][download][type] = "git"
projects[imagex_user][download][url] = "git@github.com:imagex/imagex_user.git"
projects[imagex_user][download][tag] = "7.x-1.0"

projects[imagex_wiki][type] = "module"
projects[imagex_wiki][subdir] = "imagex/modules"
projects[imagex_wiki][download][type] = "git"
projects[imagex_wiki][download][url] = "git@github.com:imagex/imagex_wiki.git"
projects[imagex_wiki][download][tag] = "7.x-1.0"

projects[imagex_migration][type] = "module"
projects[imagex_migration][subdir] = "imagex/modules"
projects[imagex_migration][download][type] = "git"
projects[imagex_migration][download][url] = "git@github.com:imagex/imagex_migration.git"
projects[imagex_migration][download][tag] = "7.x-1.0"

projects[imagex_dbal][type] = "module"
projects[imagex_dbal][subdir] = "imagex/modules"
projects[imagex_dbal][download][type] = "git"
projects[imagex_dbal][download][url] = "git@github.com:imagex/imagex_dbal.git"
projects[imagex_dbal][download][tag] = "7.x-1.0"

projects[imagex_socialmedia][type] = "module"
projects[imagex_socialmedia][subdir] = "imagex/modules"
projects[imagex_socialmedia][download][type] = "git"
projects[imagex_socialmedia][download][url] = "git@github.com:imagex/imagex_socialmedia.git"
projects[imagex_socialmedia][download][tag] = "7.x-1.0"

projects[imagex_search][type] = "module"
projects[imagex_search][subdir] = "imagex/modules"
projects[imagex_search][download][type] = "git"
projects[imagex_search][download][url] = "git@github.com:imagex/imagex_search.git"
projects[imagex_search][download][tag] = "7.x-1.0"

; Libraries
libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/zipball/master"
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"

includes[] = "https://raw.github.com/imagex/imagex_wysiwyg_profiles/7.x-1.x/modules/imagex_wysiwyg_profiles_codehighlighter/drupal-org.make"
