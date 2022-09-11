#is null
select
    name
from
    customer
where 
    referee_id is null or referee_id !=2;
	
#ifnull
select
    name
from
    customer
where 
    ifnull (referee_id, 0) <> 2;
