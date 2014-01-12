<?php
/**
 * @file
 * linux_user_points.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function linux_user_points_default_rules_configuration() {
  $items = array();
  $items['rules_linux_answer_forum'] = entity_import('rules_config', '{ "rules_linux_answer_forum" : {
      "LABEL" : "Linux: Answer Forum",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "comment" ],
      "ON" : [ "comment_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "forum" : "forum" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "250",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Points for answer forum",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_answer_question'] = entity_import('rules_config', '{ "rules_linux_answer_question" : {
      "LABEL" : "Linux: Answer Question",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "answer" : "answer" } } } }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "250",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Answer question",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_award_guru_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_award_guru_penguin_badge" : {
      "LABEL" : "Linux: Award Guru Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "NOT user_badges_has_badge" : { "badge_id" : "2", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "1000",
            "comparison" : "ge"
          }
        }
      ],
      "DO" : [
        { "add_badge_by_name" : { "badge" : "2", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_award_hacker_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_award_hacker_penguin_badge" : {
      "LABEL" : "Linux: Award Hacker Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "NOT user_badges_has_badge" : { "badge_id" : "1", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "500",
            "comparison" : "ge"
          }
        }
      ],
      "DO" : [
        { "add_badge_by_name" : { "badge" : "1", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_award_iron_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_award_iron_penguin_badge" : {
      "LABEL" : "Linux: Award Iron Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "NOT user_badges_has_badge" : { "badge_id" : "4", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "7000",
            "comparison" : "ge"
          }
        }
      ],
      "DO" : [
        { "add_badge_by_name" : { "badge" : "4", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_award_jedi_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_award_jedi_penguin_badge" : {
      "LABEL" : "Linux: Award Jedi Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "NOT user_badges_has_badge" : { "badge_id" : "5", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "10000",
            "comparison" : "ge"
          }
        }
      ],
      "DO" : [
        { "add_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_award_ninja_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_award_ninja_penguin_badge" : {
      "LABEL" : "Linux: Award Ninja Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "NOT user_badges_has_badge" : { "badge_id" : "3", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "5000",
            "comparison" : "ge"
          }
        }
      ],
      "DO" : [
        { "add_badge_by_name" : { "badge" : "3", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_calendar_item_accepted'] = entity_import('rules_config', '{ "rules_linux_calendar_item_accepted" : {
      "LABEL" : "Linux: Calendar Item Accepted",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "event" : "event" } } } }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "100",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Insert for calendar item",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_comment'] = entity_import('rules_config', '{ "rules_linux_comment" : {
      "LABEL" : "Linux: Comment",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "comment" ],
      "ON" : [ "comment_insert" ],
      "IF" : [
        { "NOT entity_is_of_bundle" : {
            "entity" : [ "comment:node" ],
            "type" : "node",
            "bundle" : { "value" : { "forum" : "forum" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "100",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Points for comment",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_comment_upvote_post'] = entity_import('rules_config', '{ "rules_linux_comment_upvote_post" : {
      "LABEL" : "Linux: Comment Upvote Post",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "voting_rules" ],
      "ON" : [ "voting_rules_insert_comment" ],
      "IF" : [
        { "NOT data_is" : { "data" : [ "vote:user" ], "value" : [ "comment:author" ] } }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "vote:user" ],
            "points" : "50",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Points for comment liked",
            "display" : 1,
            "moderate" : "default"
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "50",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Points for comment liked by other user",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_contest_entry'] = entity_import('rules_config', '{ "rules_linux_contest_entry" : {
      "LABEL" : "Linux: Contest Entry",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "contest_entry" : "contest_entry" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "100",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Points for contest entry",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_directory_item_accepted'] = entity_import('rules_config', '{ "rules_linux_directory_item_accepted" : {
      "LABEL" : "Linux: Directory Item Accepted",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "directory" : "directory" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "100",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Insert for directory item",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_node_upvote_post'] = entity_import('rules_config', '{ "rules_linux_node_upvote_post" : {
      "LABEL" : "Linux: Node Upvote Post",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "flag" ],
      "ON" : [ "flag_flagged_imagex_node_like" ],
      "IF" : [
        { "NOT data_is" : { "data" : [ "flagging-user" ], "value" : [ "flagged-node:author" ] } }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "flagging-user" ],
            "points" : "50",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Insert for upvoting post",
            "display" : 1,
            "moderate" : "default"
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "flagged-node:author" ],
            "points" : "50",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Points for node liked by other user",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_report_comment_spam'] = entity_import('rules_config', '{ "rules_linux_report_comment_spam" : {
      "LABEL" : "Linux: Report Comment Spam",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "userpoints_rules", "flag" ],
      "ON" : [ "flag_flagged_inappropriate_content_comment" ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "flagging-user" ],
            "points" : "50",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Points for flagging comment inappropriate",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_report_node_spam'] = entity_import('rules_config', '{ "rules_linux_report_node_spam" : {
      "LABEL" : "Linux: Report Node Spam",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "userpoints_rules", "flag" ],
      "ON" : [ "flag_flagged_inappropriate_content_node" ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "flagging-user" ],
            "points" : "50",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Points for flagging node inappropriate",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_linux_reverse_guru_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_reverse_guru_penguin_badge" : {
      "LABEL" : "Linux: Reverse Guru Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "user_badges_has_badge" : { "badge_id" : "2", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "1000",
            "comparison" : "lt"
          }
        }
      ],
      "DO" : [
        { "remove_badge_by_name" : { "badge" : "2", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_reverse_hacker_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_reverse_hacker_penguin_badge" : {
      "LABEL" : "Linux: Reverse Hacker Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "user_badges_has_badge" : { "badge_id" : "1", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "500",
            "comparison" : "lt"
          }
        }
      ],
      "DO" : [
        { "remove_badge_by_name" : { "badge" : "1", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_reverse_iron_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_reverse_iron_penguin_badge" : {
      "LABEL" : "Linux: Reverse Iron Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "user_badges_has_badge" : { "badge_id" : "4", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "7000",
            "comparison" : "lt"
          }
        }
      ],
      "DO" : [
        { "remove_badge_by_name" : { "badge" : "4", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_reverse_jedi_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_reverse_jedi_penguin_badge" : {
      "LABEL" : "Linux: Reverse Jedi Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "user_badges_has_badge" : { "badge_id" : "5", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "10000",
            "comparison" : "lt"
          }
        }
      ],
      "DO" : [
        { "remove_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_reverse_ninja_penguin_badge'] = entity_import('rules_config', '{ "rules_linux_reverse_ninja_penguin_badge" : {
      "LABEL" : "Linux: Reverse Ninja Penguin Badge",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "user_badges", "linux_user_badge", "userpoints_rules" ],
      "ON" : [ "userpoints_event_points_awarded_after" ],
      "IF" : [
        { "user_badges_has_badge" : { "badge_id" : "3", "user" : [ "userpoints-transaction:user" ] } },
        { "AND" : [] },
        { "linux_user_badge_condition_check_points" : {
            "user" : [ "userpoints-transaction:user" ],
            "tid" : "0",
            "threshold" : "5000",
            "comparison" : "lt"
          }
        }
      ],
      "DO" : [
        { "remove_badge_by_name" : { "badge" : "3", "user" : [ "userpoints-transaction:user" ] } }
      ]
    }
  }');
  $items['rules_linux_start_a_forum_that_others_respond_to'] = entity_import('rules_config', '{ "rules_linux_start_a_forum_that_others_respond_to" : {
      "LABEL" : "Linux: Start a forum that others respond to",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "comment" ],
      "ON" : [ "comment_insert" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "comment" ],
            "type" : "comment",
            "bundle" : { "value" : { "comment_node_forum" : "comment_node_forum" } }
          }
        },
        { "data_is" : { "data" : [ "comment:node:comment-count" ], "value" : "0" } },
        { "NOT data_is" : { "data" : [ "comment:author" ], "value" : [ "comment:node:author" ] } }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:node:author" ],
            "points" : "250",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Points for forum responded to",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');

  features_alter_code('rules_config', $items);

  return $items;
}
