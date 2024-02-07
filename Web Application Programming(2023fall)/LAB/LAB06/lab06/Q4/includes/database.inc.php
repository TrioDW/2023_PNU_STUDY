<?php

require_once('includes/book-config.inc.php');
// 참고. 필요한 경우, 함수의 인자/파라미터를 변경해도 됨

function setConnectionInfo($values=array()) {
	// extract connection-related info from $values
	$connString = $values[0];
    $user = $values[1];
    $password = $values[2];

    // create PDO(PHP Data Object)
    $pdo = new PDO($connString, $user, $password);
    $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    // return PDO object
    return $pdo;
}

function runQuery($pdo, $sql, $parameters=array())     {
    // run query and return
    $parameter = [];
    if (is_array($parameters)) {
      $parameter = array($parameters);
    }
    $results = null;
    if (count($parameter) > 0) {
        $results = $pdo->prepare($sql);
        $executedOk = $results->execute($parameter[0]);
        if (!$executedOk) {
            throw new PDOException;
        }
    }
    else {
        $results = $pdo->query($sql);
        if (!$results) {
            throw new PDOException;
        }
    }
    return $results;
}

function readAllCustomers() {
    // setConnectionInfo() 및 runQuery()를 한 번씩 호출
    $pdo = setConnectionInfo(array(DBCONNECTION, DBUSER, DBPASS));
    $results = runQuery($pdo, "SELECT * FROM customers", null);

    // return results = query result(all customer info)
    return $results;
}

function readSelectCustomers($lastName) {
    // setConnectionInfo() 및 runQuery()를 한 번씩 호출
    // customer의 lastname을 string으로 검색하고, 
	// 해당하는 customer에 대한 정보만 return
    $pdo = setConnectionInfo(array(DBCONNECTION, DBUSER, DBPASS));
    $results = runQuery($pdo, "SELECT * FROM customers WHERE lastName LIKE ?", array($lastName));
    
    return $results;
}

function readCategories() {
    // setConnectionInfo() 및 runQuery()를 한 번씩 호출
    // return : categories info
    $pdo = setConnectionInfo(array(DBCONNECTION, DBUSER, DBPASS));
    $results = runQuery($pdo, "SELECT * FROM categories", null);
    
    return $results;
}

function readImprints() {
    // setConnectionInfo() 및 runQuery()를 한 번씩 호출
    $pdo = setConnectionInfo(array(DBCONNECTION, DBUSER, DBPASS));
    $results = runQuery($pdo, "SELECT * FROM imprints", null);
	// return : imprints info
    return $results;
}
?>