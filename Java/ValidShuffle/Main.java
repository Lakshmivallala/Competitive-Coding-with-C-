class Main
{

static boolean ValidShuffle(String s1, String s2, String r)
{
		if(s1.length()+s2.length()!= r.length())
		{
		return false;	
		}

		int i=0,j=0,k=0;
		while(k!=r.length())
		{
			if(i<s1.length() && s1.charAt(i)==r.charAt(k))
				i++;

			else if(j<s2.length() && s2.charAt(j)==return.charAt(k))
				j++;

			else
				return false;

			k++;
		}

		if(i<s1.length() || j<s2.length())
			return false;


		return true;
}

public static void main(String[] args)
{
	String s1="XY";
	String s2="12";
	String[] result= {"1XY2","Y12X"};

	for(String r : result)
	{
	if(ValidShuffle(s1,s2,r)==true)
	{
		System.out.println(r+ " is a valid shuffle");
	}
	else
	{
		System.out.println(r+ " is not a valid shuffle");
	}
	}
}

}// main