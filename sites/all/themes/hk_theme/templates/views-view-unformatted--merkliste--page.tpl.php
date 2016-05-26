<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $result = $view->result;  ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
  	<input type="checkbox" class ="inquiry" name="inquiry" value="<?php print $result[$id]->nid; ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>