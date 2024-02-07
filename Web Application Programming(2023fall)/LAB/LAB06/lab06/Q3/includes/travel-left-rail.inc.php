<?php
   require_once("includes/travel-config.inc.php");
   #require_once("includes/database.inc.php");
   require_once("includes/exdb.php");

   $continents = readContinents();
   $populars=readPopularCountries();
?>
<div class="panel panel-default">
           <div class="panel-heading">Search</div>
           <div class="panel-body">
             <form>
               <div class="input-group">
                  <input type="text" class="form-control" placeholder="search ...">
                  <span class="input-group-btn">
                    <button class="btn btn-warning" type="button"><span class="glyphicon glyphicon-search"></span>          
                    </button>
                  </span>
               </div>  
             </form>
           </div>
         </div>  <!-- end search panel -->       
      
         <div class="panel panel-info">
           <div class="panel-heading">Continents</div>
           <ul style="list-style: none;" class="list-group">   
            <?php
            foreach($continents as $conti) {
              echo '<li style="height: 45px; display: flex; align-items: center; padding-left: 15px; border-bottom: 1px solid #d3d3d3;"><a href="#">'.$conti[1].'</a></li>';
            }
            ?>

           </ul>
         </div>  <!-- end continents panel -->  
         <div class="panel panel-info">
           <div class="panel-heading">Popular Countries</div>
           <ul style="list-style: none;" class="list-group">  
              <?php
                foreach($populars as $popular) {
                  echo '<li style="height: 45px; display: flex; align-items: center; padding-left: 15px; border-bottom: 1px solid #d3d3d3;"><a href="#">'.$popular[4].'</a></li>';
                }
              ?>
           </ul>
         </div>  <!-- end countries panel -->    