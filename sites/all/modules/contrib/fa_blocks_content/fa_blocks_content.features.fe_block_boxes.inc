<?php
/**
 * @file
 * fa_blocks_content.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fa_blocks_content_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Description of y block1';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'block1';
  $fe_block_boxes->body = '<p>Until Drupal 8 arrives, setting up effective <strong>WYSIWYG</strong> content editing falls to us developers. For many developers, figuring out the available options and their pros and cons can be difficult. Their main goal is to have a usable site up and running as soon as possible. Over the years, I\'ve settled on a recipe that seems to work well for most clients. Other developers that I know often use a similar setup.</p>
';

  $export['block1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Description of y block2';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'block2';
  $fe_block_boxes->body = '<p>Bienvenue sur le Générateur de dégradés, Ce générateur vous permet de créer des dégradés et de les enregistrer sous forme d\'images très simplement. Vous pourrez par la suite utiliser le dégradé pour le design de votre site... Pour créer un dégradé, il faut choisir les dimensions du dégradé, les couleurs du dégradé et l\'orientation du dégradé(horizontale ou verticale). Ensuite, vous devez cliquer sur le bouton "Prévisualisation", pour voir le résultat.</p>
';

  $export['block2'] = $fe_block_boxes;

  return $export;
}
