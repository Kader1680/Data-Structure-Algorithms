<?php



class Node
{
    public $value;
    public $next;

    public function __construct($value)
    {
        $this->value = $value;
        $this->next = null;
    }
}

class Queue
{
    public $first;
    public $last;
    public $length;

    public function __construct(public $value)
    {
        $newNode = new Node($value);
        $this->first = $newNode;
        $this->last = $newNode;
        $this->length = 1;
    }
    

    public function printQueue()
    {
        $temp = $this->first;
        while ($temp != null) {
            echo $temp->value."\n";
            $temp = $temp->next;
        }
    }



}



?>
