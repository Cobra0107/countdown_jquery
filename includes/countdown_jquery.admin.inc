<?php
/*
 *  @file
 *  Handles the admin settings for the countdown
 */
/**
 * implements hook_form()
 * @param      object  $form object of the current form.
 * @param      array &$form_state referrence to form_state array
 */
function countdown_jquery_form($form, &$form_state) {
  $form['title'] => array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#weight' => -5,
  );
}
