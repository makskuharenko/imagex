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
  $items['rules_answer_a_question'] = entity_import('rules_config', '{ "rules_answer_a_question" : {
      "LABEL" : "Answer a Question",
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
            "description" : "Question Answered",
            "operation" : "Insert",
            "display" : 1,
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_answer_a_question_in_forum'] = entity_import('rules_config', '{ "rules_answer_a_question_in_forum" : {
      "LABEL" : "Answer a  Question in Forum",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "comment" ],
      "ON" : [ "comment_insert", "comment_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "forum" : "forum" } }
          }
        },
        { "data_is" : { "data" : [ "comment:status" ], "value" : "1" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "comment:node:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "250",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Insert",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_comment_on_a_article'] = entity_import('rules_config', '{ "rules_comment_on_a_article" : {
      "LABEL" : "Comment on a Article",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "comment" ],
      "ON" : [ "comment_insert", "comment_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "blog" : "blog", "imagex_news" : "imagex_news" } }
          }
        },
        { "data_is" : { "data" : [ "comment:status" ], "value" : "1" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "comment:node:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "100",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Insert",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_have_a_piece_of_content_accepted'] = entity_import('rules_config', '{ "rules_have_a_piece_of_content_accepted" : {
      "LABEL" : "Have a piece of content accepted",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "workbench_moderation", "userpoints_rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "AND" : [
            { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
            { "OR" : [
                { "contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "draft" } },
                { "contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "100",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Insert",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_start_a_forum_that_others_respond_to'] = entity_import('rules_config', '{ "rules_start_a_forum_that_others_respond_to" : {
      "LABEL" : "Start a forum that others respond to",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Linux User Points" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "comment" ],
      "ON" : [ "comment_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "forum" : "forum" } }
          }
        },
        { "data_is" : { "data" : [ "comment:node:comment-count" ], "value" : "1" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "comment:node:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "250",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Insert",
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
