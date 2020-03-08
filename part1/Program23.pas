var a,b,cur,n,code, count: Int64;
  s: string;
  arr: array of integer;
  mx1,mx2,ind1,ind2: Int64;
begin
  Readln(s);
  n := Int64.Parse(s);
//  Val(s, n, code);
  arr := ReadArrInteger(3);
  cur := arr[0]; a := arr[1]; b := arr[2];
  mx1 := -1; mx2 := -1;
  ind1 := 1; ind2 := 1;
//  WriteLn(cur, a, b);
  for var i := 1 to n do
  begin
  	count := trunc((cur * a + b) / 1791791791);
//  	Write(count, ' ');
  	cur := (cur * a + b) - count * 1791791791;
//  	cur := (cur * a + b) mod 1791791791;
  	
//  	Write(cur, ' ');
  	if (cur >= mx1) then begin 
  	  if (cur > mx1) then begin
  	    if (mx1 > mx2) then begin ind2 := ind1; mx2 := mx1; end;
		    ind1 := i; mx1 := cur;
		  end
		  else begin
		    if (cur > mx2) then begin ind2 := i; mx2 := cur; end;
		  end;  	
  	end
  	else
  	  if (cur > mx2) then begin ind2 := i; mx2 := cur; end;
	end;
  Write(ind1, ' ', ind2);
end.