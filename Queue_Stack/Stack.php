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


class Stack
{
    public $top;
    public $height;

    public function __construct(public $value)
    {
        $newNode = new Node($value);
        $this->top = $newNode;
        $this->height = 1;
    }

    public function printStack()
    {
        $temp = $this->top;
        while ($temp != null) {
            echo $temp->value."\n";
            $temp = $temp->next;
        }
    }


    public function push($value)
    {
        $newNode = new Node($value);
        if ($this->height == 0) {
            $this->top = $newNode;
        } else {
            $newNode->next = $this->top;
            $this->top = $newNode;
        }
        $this->height++;
    }

    public function pop()
    {
        if ($this->height == 0) {
            return null;
        }
        $temp = $this->top;
        $this->top = $this->top->next;
        $temp->next = null;
        $this->height--;
        return $temp;
    }
}


