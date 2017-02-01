<div class="accordionContent">
    <?php if (isset($node->field_accordion_description['und'][0]['value']) && !empty($node->field_accordion_description['und'][0]['value'])):?>
        <div class="description">
           <?php print check_markup($node->field_accordion_description['und'][0]['value'], 'full_html', '', FALSE); ?>
        </div>
    <?php endif; ?>
    <?php if (isset($node->field_accordion['und']) && !empty($node->field_accordion['und'])): $i = 0; ?>
        <div class="panel-group col-md-12 col-sm-12 col-xs-12 noPadding accordion" id="accordion">
            <?php foreach ($node->field_accordion['und'] as $value): ?>
                <div class="panel panel-default">
                    <div class="panel-heading">
                        <a data-toggle="collapse" data-parent="#accordion" href="#collapse<?php print $i; ?>">
                            <span class="icon-user_2"></span>
                            <span class="pull-right icon-chevron-down"></span>
                            <span class="questionHeading"><?php print $value['question']; ?></span>
                        </a>
                    </div>
                    <div id="collapse<?php print $i; ?>" class="panel-collapse collapse">
                        <div class="panel-body"><p><?php print $value['answer']; ?></p></div>
                    </div>
                </div>
                <?php $i++; endforeach; ?>
        </div>
    <?php endif; ?>
    <?php if (isset($node->field_accordion_link['und'][0]['url']) && !empty($node->field_accordion_link['und'][0]['url'])):?>
        <div class="text-center creerCompte">
            <?php
                print l($node->field_accordion_link['und'][0]['title'], $node->field_accordion_link['und'][0]['url'], ['absolute' => TRUE, 'attributes' => ['title' => $node->field_accordion_link['und'][0]['title'], 'class' => 'btn btn-secondary ', 'target' => '_blank',], 'html' => TRUE,]);
            ?>
        </div>
    <?php endif;?>
</div>