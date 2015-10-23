<?php

error_reporting(E_ALL);

var_dump(mail('testuser@something.com', 'Subject from mail', 'Body from mail', 'From: metzker@amplexor.com'));

?>
